/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPAVLegacyRoutingDataSource : MPAVRoutingDataSource {
    long long  _discoveryMode;
    NSString * _name;
    BOOL  _routesDetected;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_unregisterNotifications;
- (void)dealloc;
- (BOOL)devicePresenceDetected;
- (long long)discoveryMode;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id)arg3;

@end