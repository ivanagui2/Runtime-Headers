/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEONavdPeer : NSObject {
    GEONavdClientInfo * _clientInfo;
    NSXPCConnection * _connection;
    NSMutableDictionary * _entitlementCache;
    BOOL  _expectingUpdates;
}

@property (nonatomic, readonly) GEONavdClientInfo *clientInfo;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readwrite) BOOL expectingUpdates;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)connection;
- (void)dealloc;
- (BOOL)expectingUpdates;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)setExpectingUpdates:(BOOL)arg1;
- (void)updateConnection:(id)arg1;

@end
