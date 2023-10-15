import socket

serverPort = 13000
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server.bind(('localhost', serverPort))
server.listen()
print("The server is ready to receive.")
while True:
    conn, addr = server.accept()
    sentence = conn.recv(2048).decode().upper()
    print(sentence)
    conn.send(sentence.encode())
    conn.close()
