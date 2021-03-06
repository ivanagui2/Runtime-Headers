/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
 */

@interface CBPeripheralManager : NSObject <CBXpcConnectionDelegate> {
    BOOL  _advertising;
    NSMutableDictionary * _centrals;
    NSMutableDictionary * _characteristicIDs;
    id  _connection;
    <CBPeripheralManagerDelegate> * _delegate;
    BOOL  _readyForUpdates;
    NSMutableArray * _services;
    long long  _state;
    NSLock * _updateLock;
    BOOL  _waitingForReady;
}

@property (nonatomic, readwrite) <CBPeripheralManagerDelegate> *delegate;
@property (atomic, readonly) BOOL isAdvertising;
@property (atomic, readonly) long long state;

+ (long long)authorizationStatus;

- (void)addService:(id)arg1;
- (id)centralFromArgs:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (BOOL)isAdvertising;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)startAdvertising:(id)arg1;
- (long long)state;
- (void)stopAdvertising;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3;
- (void)xpcConnectionDidFinalize;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end
