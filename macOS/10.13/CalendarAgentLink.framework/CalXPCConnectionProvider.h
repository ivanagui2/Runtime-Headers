/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface CalXPCConnectionProvider : NSObject {
    id  _aliveHandler;
    NSXPCConnection * _connection;
    id  _errorHandler;
    CalXPCConnectionInfo * _info;
    NSDate * _lastLifecycleCheckin;
}

@property (nonatomic, readwrite, copy) id aliveHandler;
@property (nonatomic, readwrite, retain) NSXPCConnection *connection;
@property (nonatomic, readwrite, copy) id errorHandler;
@property (nonatomic, readwrite, retain) CalXPCConnectionInfo *info;
@property (nonatomic, readwrite, retain) NSDate *lastLifecycleCheckin;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(id)arg2;

- (void).cxx_destruct;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (void)_didReceiveLifecycleNotificationHelper:(unsigned long long)arg1;
- (void)_reregisterForLifecycleNotification:(id)arg1;
- (void)_updateExportedObject;
- (id)aliveHandler;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)didReceiveLifecycleNotification;
- (id)errorHandler;
- (id)info;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(id)arg2;
- (id)lastLifecycleCheckin;
- (id)remoteProxyWithErrorHandler:(id)arg1;
- (void)setAliveHandler:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLastLifecycleCheckin:(id)arg1;
- (void)startMonitoringLifecycleWithHandler:(id)arg1;
- (void)updateConnectionInfo:(id)arg1;

@end
