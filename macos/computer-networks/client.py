import socket


def receive_file(conn, filename):
    with open(filename, 'wb') as file:
        while True:
            data = conn.recv(1024)
            if not data:
                break
            file.write(data)
    print("File received successfully!")


def main():
    host = '127.0.0.1'
    port = 12345

    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    client_socket.connect((host, port))

    filename = input("Enter the filename: ")
    client_socket.send(filename.encode())

    receive_file(client_socket, filename)

    client_socket.close()


if __name__ == '__main__':
    main()
