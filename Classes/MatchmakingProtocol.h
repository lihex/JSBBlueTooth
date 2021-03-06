#ifndef  _MATCHMAKING_PROTOCOL_H_
#define  _MATCHMAKING_PROTOCOL_H_

#import "MatchmakingServer.h"
#import "MatchmakingClient.h"

class MatchmakingClientProtocol {
public:
    virtual void serverBecameAvailable(MatchmakingClient* client, NSString* peerID) {};
    virtual void serverBecameUnavailable(MatchmakingClient* client, NSString* peerID) {};
    virtual void didDisconnectFromServer(MatchmakingClient* client, NSString* peerID) {};
    virtual void clientNoNetwork(MatchmakingClient* client) {};
    virtual void clientReceiveData(NSData* data, NSString* peerID) {};
};

class MatchmakingServerProtocol {
public:
    virtual void clientDidConnect(MatchmakingServer* server, NSString* peerID) {};
    virtual void clientDidDisconnect(MatchmakingServer* server, NSString* peerID) {};
    virtual void sessionDidEnd(MatchmakingServer* server) {};
    virtual void serverNoNetwork(MatchmakingServer* server) {};
    virtual void serverReceiveData(NSData* data, NSString* peerID) {};
};
#endif // _MATCHMAKING_PROTOCOL_H_

