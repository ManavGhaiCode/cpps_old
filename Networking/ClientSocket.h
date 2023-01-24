#ifndef _Client_Socket_H_
#define _Client_Socket_H_

#include <iostream>

#include <sys/socket.h>
#include <netinet/in.h>

class ServerSocket {
    private:
        struct sockaddr_in address;

        int r_socket;
        int connection;

    public:
        ServerSocket(int domain, int serviceType, int protocol, int port, u_long IP) {
            address.sin_family = domain;
            address.sin_port = htons(port);
            address.sin_addr.s_addr = htonl(IP);

            r_socket = socket(domain, serviceType, protocol);

            testSock(r_socket);

            connection = connect(r_socket, (struct sockaddr *)&address, sizeof(address));

            testSock(connection);
        };

        void testSock(int test_sock) {
            if (test_sock < 0) {
                std::cerr << "Failed to connect..." << std::endl;
            }
        }

        // Getters

        int getSock() {
            return r_socket;
        }

        int getConnection() {
            return r_socket;
        }


        struct sockaddr_in getAddress() {
            return address;
        }

        ~ServerSocket() {};
};

#endif