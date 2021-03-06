/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreWLAN.framework/Versions/A/CoreWLAN
 */

@interface CWWiFiClient : NSObject {
    id  _delegate;
    NSMutableSet * _eventList;
    NSMutableDictionary * _interfaceMap;
    NSObject<OS_dispatch_queue> * _mutex;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readwrite) id delegate;

+ (id)interfaceNames;
+ (id)sharedWiFiClient;

- (id)__interfaceWithName:(id)arg1;
- (void)__startMonitoringEventWithType:(long long)arg1 reply:(id)arg2;
- (void)airPlayDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)autoJoinDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)autoJoinDidStartForWiFiInterfaceWithName:(id)arg1;
- (void)bssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)countryCodeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (void)foundTetherDevices:(id)arg1;
- (id)init;
- (id)interface;
- (void)interfaceAddedWithName:(id)arg1;
- (void)interfaceRemovedWithName:(id)arg1;
- (id)interfaceWithName:(id)arg1;
- (id)interfaces;
- (void)internal_enableTetherDevice:(id)arg1 reply:(id)arg2;
- (void)internal_joinWiFiNetworkWithUserAgent:(id)arg1 interfaceName:(id)arg2 dialogToken:(long long)arg3 reply:(id)arg4;
- (void)internal_setWiFiPasswordForUserKeychain:(id)arg1 ssid:(id)arg2 reply:(id)arg3;
- (void)internal_showAvailableWiFiNetworks:(id)arg1 interfaceName:(id)arg2;
- (void)internal_showDHCPMessage:(id)arg1 networkName:(id)arg2;
- (void)internal_showMICErrorWithNetworkName:(id)arg1;
- (void)internal_startBrowsingForTetherDevicesAndReply:(id)arg1;
- (void)internal_startLoginWindowMode8021XWithProfile:(id)arg1 username:(id)arg2 password:(id)arg3 interfaceWithName:(id)arg4 reply:(id)arg5;
- (void)internal_startUserMode8021XUsingKeychainWithSSID:(id)arg1 interfaceWithName:(id)arg2 reply:(id)arg3;
- (void)internal_startUserMode8021XWithPasspointDomainName:(id)arg1 interfaceWithName:(id)arg2 reply:(id)arg3;
- (void)internal_startUserMode8021XWithSSID:(id)arg1 username:(id)arg2 password:(id)arg3 identity:(id)arg4 remember:(BOOL)arg5 interfaceWithName:(id)arg6 reply:(id)arg7;
- (void)internal_stopBrowsingForTetherDevicesAndReply:(id)arg1;
- (void)linkDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)modeDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(id)arg1;
- (void)rangingReportEventForWiFiInterfaceWithName:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)realTimeModeDidEndForWiFiInterfaceWithName:(id)arg1;
- (void)realTimeModeDidStartForWiFiInterfaceWithName:(id)arg1;
- (void)rsnHandshakeDidCompleteForWiFiInterfaceWithName:(id)arg1;
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(id)arg1;
- (BOOL)startMonitoringEventWithType:(long long)arg1 error:(out id*)arg2;
- (BOOL)stopMonitoringAllEventsAndReturnError:(out id*)arg1;
- (BOOL)stopMonitoringEventWithType:(long long)arg1 error:(out id*)arg2;
- (void)virtualInterfaceStateChangedForWiFiInterfaceWithName:(id)arg1;
- (void)willShowJoinUIForWiFiNetwork:(id)arg1 interfaceName:(id)arg2 reply:(id)arg3;

// CWWiFiClient (Private)

+ (id)virtualInterfaceNames;

- (void)acquireBluetoothPagingLockAndReply:(id)arg1;
- (void)relinquishBluetoothPagingLockAndReply:(id)arg1;
- (BOOL)startBrowsingForTetherDevicesAndReturnError:(id*)arg1;
- (BOOL)stopBrowsingForTetherDevicesAndReturnError:(id*)arg1;
- (void)submitAWDMetric:(id)arg1 metricID:(id)arg2 reply:(id)arg3;

// CWWiFiClient (WiFiAgent)

- (void)internal_foundTetherDevices:(id)arg1;
- (BOOL)internal_userAgentWillShowJoinUIForWiFiNetwork:(id)arg1 interfaceName:(id)arg2 dialogToken:(long long)arg3 error:(id*)arg4;

@end
