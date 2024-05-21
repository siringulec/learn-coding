#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define WINDOW_SIZE 4
#define MAX_SEQUENCE_NUM 8
#define MAX_ALLOWED_TO_SEND 10

// Data structure to hold packet information
struct packet {
    int seq_num; // sequence number
    int is_corrupted; // flag to indicate whether packet is corrupted
};

// Data structure to hold window information
struct window {
    int base; // base sequence number
    int next_seq_num; // next sequence number to be sent
    int num_packets; // number of packets in the window
    struct packet packets[WINDOW_SIZE]; // array of packets in the window
    int acks[MAX_SEQUENCE_NUM]; // array to store acknowledgments
};


int random_number(int min, int max) {
    return min + rand() % (max - min + 1);
}


// Function to simulate sending a packet
void send_packet(struct packet *p) {
    // Simulate packet transmission
    printf("Sending packet %d\n", p->seq_num);
    if (p->is_corrupted) {
        printf("Packet %d is corrupted\n", p->seq_num);
    }
}

// Function to simulate receiving a packet
void receive_packet(struct packet *p) {
    // Simulate packet reception
    printf("Received packet %d\n", p->seq_num);
}



int main() {
    srand(time(NULL));
    struct window sender_window = {0, 0, 0};
    struct window receiver_window = {0, 0, 0};

    // Generate a random number of packets to send
    int num_packets_to_send = random_number(1, MAX_ALLOWED_TO_SEND);

    // Loop until all packets have been sent and acknowledged
    while (sender_window.next_seq_num < num_packets_to_send || receiver_window.base < num_packets_to_send) {
        // Send packets up to the window size or until all packets have been sent
        while (sender_window.next_seq_num < num_packets_to_send && sender_window.num_packets < WINDOW_SIZE) {
            // Create a new packet with a random sequence number and corruption flag
            struct packet p = {sender_window.next_seq_num, random_number(0, 100) > 70};

            // Add the packet to the sender window
            sender_window.packets[sender_window.num_packets] = p;
            sender_window.num_packets++;
            sender_window.next_seq_num++;

            send_packet(&p);
        }

        int transmission_delay = random_number(1, 5);
        sleep(transmission_delay);

        int reception_delay = random_number(1, 5);
        sleep(reception_delay);

        // Check for acknowledgments
        int i;
        for (i = 0; i < sender_window.num_packets; i++) {
            if (sender_window.packets[i].seq_num < sender_window.base) {
                // Packet has already been acknowledged, skip
                continue;
            }

            if (sender_window.packets[i].is_corrupted) {
                printf("Packet %d is corrupted, resending\n", sender_window.packets[i].seq_num);
                send_packet(&sender_window.packets[i]);
            } else if (receiver_window.acks[sender_window.packets[i].seq_num]) {
                printf("Packet %d has already been acknowledged\n", sender_window.packets[i].seq_num);
                continue;
            } else {
                // Packet has been acknowledged, update sender and receiver windows
                printf("Packet %d has been acknowledged\n", sender_window.packets[i].seq_num);
                receiver_window.acks[sender_window.packets[i].seq_num] = 1;
                sender_window.base = sender_window.packets[i].seq_num + 1;
                sender_window.num_packets-=1;
            }
        }
    }
    printf("All packets have been sent and acknowledged\n");
    return 0;
}
