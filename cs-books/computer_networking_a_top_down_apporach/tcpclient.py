import socket

serverName = 'localhost'
serverPort = 13000
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect((serverName, serverPort))

sentence = input('Input sentences: ')
client.send(sentence.encode())

modifiedSentence = client.recv()
print(f"From server: {modifiedSentence.decode()}")
client.close()