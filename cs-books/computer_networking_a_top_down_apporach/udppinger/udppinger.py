import socket
import time

pinger = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
pinger.settimeout(1)

for i in range(1, 11): 
        try:
            startTime = time.time()
            pinger.sendto(f"Ping {i} {startTime}".encode(), ('localhost', 12000))
            # print(f"Ping {i} {startTime}")
            message, addr = pinger.recvfrom(2048)
            print(message.decode())
            recvTime = time.time()
            print(f"The RTT is: {recvTime - startTime}")
        except TimeoutError:
            print("Request timed out")
    
pinger.close()