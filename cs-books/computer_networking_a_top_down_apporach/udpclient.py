import socket

client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
message = input('Input sentences: ')

client.sendto(message.encode(), ('localhost', 12000))
client.close()