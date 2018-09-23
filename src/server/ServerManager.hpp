#ifndef SERVERMANAGER_HPP
#define SERVERMANAGER_HPP

#include "ServerSocket.hpp"
#include "SubSocket.hpp"
#include "Decoder.hpp"

class ServerManager {

public:

    static ServerManager* Instance(const int& port);
    static void Release();

    void Run();

private:

    static ServerManager* sInstance;

    // private variable
    int mPort;
    ServerSocket* mSocket; 
    Decoder* mDecoder;

    ServerManager(const int& port);
    ~ServerManager();

    // handler
    void Update();
    void NewConn(const int& sockfd);
};

#endif
