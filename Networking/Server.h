#ifndef _Server_H_
#define _Server_H_

#include <unistd.h>

#include "./ServerSocket.h"

class Server {
    private:
        ServerSocket *  sock;
        bool running = true;
    public:
        virtual void accater() = 0;
        virtual void handler() = 0;
        virtual void respinder() = 0;

        Server(int domain, int serviceType, int protocol, int port, u_long IP) {
            sock = new ServerSocket (domain, serviceType, protocol, port, IP);
        };

        Server(int domain, int serviceType, int protocol, int port, u_long IP, int bklog) {
            sock = new ServerSocket (domain, serviceType, protocol, port, IP);
            sock->setBacklog(bklog);
        };

        virtual void launcher() = 0;

        void Kill() {
            running = false;
            delete this;
        }

        ~Server() {
            delete sock;
        }

        // Getters

        ServerSocket getSock() {
            return *sock;
        }
};

#endif