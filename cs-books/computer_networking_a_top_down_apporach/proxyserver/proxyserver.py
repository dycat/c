import socket
import sys


if len(sys.argv) <= 1:
    print("Usage: python pythonserver.py server_ip\n[server_ip]: It is the IP Address of Proxy Server")
    sys.exit()


# Create a server socket, bind it to a port and start listening
tcpSerSock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
tcpSerSock.bind(('', 5432))
tcpSerSock.listen(1)


while 1:
    # Start receiving data from the client
    tcpCliSock, addr = tcpSerSock.accept()
    print("Received a connection from: ", addr)
    message = tcpCliSock.recv(1024).decode()
    print(message)
    # Extract the filename from the given message
    print(message.split()[1])
    filename = message.split()[1].partition("/")[2]
    print(filename)
    fileExist = "false"
    filetouse = "/" + filename
    print(filetouse)
    try:
        # Check weather the file exist in the cache
        f = open(filetouse[1:], "r")
        outputdata = f.readlines()
        fileExist = "true"
        # ProxyServer finds a cache hit and generates a response message
        tcpCliSock.send("HTTP/1.0 200 OK\r\n")
        tcpCliSock.send("Content-Type: text/html\r\n")
        for i in range(0, len(outputdata)):
            tcpCliSock.send(outputdata[i].encode())
            print("Read from cache")
    
    # Error handling for file not found in cache
    except IOError:
        if fileExist == "false":
            # Create a socket on the proxyserver
            c = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            hostn = filename.replace("www.", "", 1)
            print(hostn)
            try:
                # Connect to the socket to port 80
                c.connect((hostn, 80))
                # Create a temporary file on this socket and ask port 80 for the file requested by the client
                fileobj = c.makefile('r', 0)
                fileobj.write("Get  "+"http://" + filename + " Http/1.0\n\n")
                # Read the response into buffer
                recv = c.recv_into(fileobj)
                # Create a new file in the cache for the requested file
                # Also send the response in the buffer to client socket and the corresponding file in the cache
                tmpFile = open("./" + filename, "wb")
                tcpCliSock.send(fileobj.encode())
                # TODO: Also send the response in the buffer to client socket and the corresponding file in the cache

            except:
                print("Illegal request")
        
        else:
            # HTTP response message for file not found
            print("404 NOT FOUND")
            tcpCliSock.send("404 NOT FOUND")

    # Close the client and the server sockets
    tcpCliSock.close()

tcpSerSock.close()
sys.exit()
