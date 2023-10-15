import socket
import sys
import logging


logger = logging.getLogger("Webserver")
logger.setLevel(logging.INFO)
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)
formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
# add formatter to ch
ch.setFormatter(formatter)
logger.addHandler(ch)


webServer = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# Prepare a server socket
PORT = 8000
HOSTNAME = "localhost"
webServer.bind((HOSTNAME, PORT))
webServer.listen(2)

while True:
    # Establish the connection
    logger.info("Ready to serve...")
    connection, addr = webServer.accept()
    logger.info(f"{addr} has connected.")

    try:
        message = connection.recv(1024).decode()

        filename = message.split()[1]
        logger.info(filename)
        f = open(filename[1:])

        outputdata = f.readlines()
        logger.info(outputdata)

        # Send One HTTP header line into socket
        connection.send("HTTP/1.0 200 OK\nContent-Type: text/html\n\n".encode())

        # Send the content of the requested file to the client
        for i in range(0, len(outputdata)):
            connection.send(outputdata[i].encode())
        connection.send("\r\n".encode())

        connection.close()
    
    except IOError:
        # Send response message for file not found
        connection.send("404 Not Found".encode())
        logger.info("404 Not found")
        # Close client socket
        connection.close()

webServer.close()
sys.exit()
