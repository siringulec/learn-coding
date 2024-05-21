import socket


def send_file(conn, filename):
    try:
        with open(filename, 'rb') as file:
            data = file.read()
            conn.sendall(data)
            print("File sent successfully!")
    except FileNotFoundError:
        print("File not found!")


def main():
    host = '127.0.0.1'
    port = 12345

    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind((host, port))
    server_socket.listen(1)

    print("Server listening on {}:{}".format(host, port))

    conn, addr = server_socket.accept()
    print("Connection established from:", addr)

    filename = conn.recv(1024).decode()
    print("Requested file:", filename)

    send_file(conn, filename)

    conn.close()
    server_socket.close()


if __name__ == '__main__':
    main()
