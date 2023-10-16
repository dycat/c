import random
import socket


server = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
server.bind(('localhost', 12000))
print("The server listen at localhost:12000")

while True:
    rand = random.randint(0, 10)
    print(rand)
    message, addr = server.recvfrom(1024)
    message = message.upper()

    if rand < 4:
        continue

    server.sendto(message, addr)