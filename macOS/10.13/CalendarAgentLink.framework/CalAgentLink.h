/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalAgentLink : NSObject {
    CalXPCConnectionProvider * _connectionProvider;
}

@property (atomic, readwrite, retain) CalXPCConnectionProvider *connectionProvider;

+ (void)_broadcastToOtherClients:(SEL)arg1 objects:(id)arg2 agent:(id)arg3;
+ (id)_registerLightweightClientWithMachServiceName:(id)arg1;
+ (void)_removeAgentLink:(id)arg1;
+ (id)addressBookProxy;
+ (id)addressBookProxyWithErrorBlock:(id)arg1;
+ (id)agent;
+ (id)agentWithErrorBlock:(id)arg1;
+ (void)broadcastToOtherClients:(SEL)arg1;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (void)broadcastToOtherClients:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withAgent:(id)arg4;
+ (id)clientSideCache;
+ (id)contactsGeneralProxy;
+ (id)contactsGeneralProxyWithErrorBlock:(id)arg1;
+ (void)initialize;
+ (id)remoteObjectForMachServiceName:(id)arg1;
+ (id)remoteObjectForMachServiceName:(id)arg1 errorBlock:(id)arg2;
+ (id)sharedInstanceWithMachServiceName:(id)arg1;
+ (id)sharedInstances;
+ (id)startWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
+ (id)store;
+ (id)storeWithErrorBlock:(id)arg1;

- (void).cxx_destruct;
- (id)_remoteObject;
- (id)_remoteObjectWithErrorBlock:(id)arg1;
- (id)connectionProvider;
- (BOOL)hasRequiredFields;
- (id)init;
- (id)initWithMachServiceName:(id)arg1 exportedObject:(id)arg2;
- (void)setConnectionProvider:(id)arg1;
- (void)setExportedObject:(id)arg1;

@end