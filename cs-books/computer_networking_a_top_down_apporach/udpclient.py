import socket

client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
message = input('Input sentences: ')
client.connect(('localhost', 12000))
client.send(message.encode())
client.close()