/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSDockConnection : NSObject {
    NSObject<OS_xpc_object> * _connection;
    int  _pid;
    NSObject<OS_dispatch_queue> * _queue;
    id  _receiveHandler;
    NSString * _serviceName;
    BOOL  _started;
}

@property (atomic, readonly, copy) NSString *serviceName;

+ (id)_nameToConnectionMap;
+ (id)allConnections;
+ (id)connectionWithServiceName:(id)arg1;

- (void)_makeConnectionIfNeeded;
- (void)_makeConnectionIfNeededWithRetryInterval:(double)arg1 onDemand:(BOOL)arg2;
- (void)_processEvent:(id)arg1;
- (void)dealloc;
- (int)dockPid;
- (id)init;
- (id)initWithServiceName:(id)arg1 receiveHandler:(id)arg2;
- (void)reactToDockAlive;
- (void)reactToDockDied;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 synchronous:(BOOL)arg2 replyHandler:(id)arg3;
- (id)serviceName;
- (void)startConnection;

@end
