import socket

server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
server.bind(('localhost', 12000))

print("The UDP server is ready to receive...")
while True:
    message, clientAddress = server.recvfrom(2048)
    messageDecoded = message.decode().upper()
    print(f"Client {clientAddress} has send message: ")
    print(messageDecoded)
    print("-- End --")
