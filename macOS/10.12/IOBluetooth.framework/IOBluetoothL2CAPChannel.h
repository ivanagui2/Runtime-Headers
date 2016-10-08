/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothL2CAPChannel : IOBluetoothObject <NSPortDelegate> {
    id  _mReserved;
    unsigned short  mChannelPSM;
    NSPort * mDataAvailablePort;
    IOBluetoothDevice * mDevice;
    int (* mEventDataListener;
    void * mEventDataListenerRefCon;
    BOOL  mIncomingChannel;
    int (* mIncomingDataListener;
    void * mIncomingDataListenerRefCon;
    struct _IODataQueueMemory { unsigned int x1; unsigned int x2; unsigned int x3; struct _IODataQueueEntry { unsigned int x_4_1_1; unsigned char x_4_1_2[4]; } x4[1]; } * mIncomingDataQueue;
    BOOL  mIsClosed;
    id  mL2CAPChannelConnectionHandler;
    unsigned short  mLocalChannelID;
    unsigned long long  mObjectID;
    unsigned short  mRemoteChannelID;
}

@property (atomic, readwrite) unsigned short PSM;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) IOBluetoothDevice *device;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) unsigned short incomingMTU;
@property (atomic, readonly) unsigned short localChannelID;
@property (atomic, readwrite) unsigned long long objectID;
@property (atomic, readonly) unsigned short outgoingMTU;
@property (atomic, readonly) unsigned short remoteChannelID;
@property (atomic, readonly) Class superclass;

+ (id)getKeyForIOService:(unsigned int)arg1;
+ (id)getUniqueObjectDictionary:(BOOL)arg1;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2;
+ (id)registerForChannelOpenNotifications:(id)arg1 selector:(SEL)arg2 withPSM:(unsigned short)arg3 direction:(int)arg4;
+ (id)withL2CAPChannelRef:(struct OpaqueIOBluetoothObjectRef { }*)arg1;
+ (id)withObjectID:(unsigned long long)arg1;

- (unsigned short)PSM;
- (BOOL)channelStateIsClosed;
- (BOOL)channelStateIsOpen;
- (int)closeChannel;
- (void)closeKernelConnection;
- (int)configureChannel:(id)arg1;
- (int)configureMTU:(unsigned short)arg1 maxIncomingMTU:(unsigned short)arg2;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (int)createQueue;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)destroyQueue;
- (id)device;
- (void)dispatchEvent:(struct IOBluetoothL2CAPChannelEvent { int x1; union { struct IOBluetoothL2CAPChannelDataBlock { void *x_1_2_1; unsigned long long x_1_2_2; } x_2_1_1; void *x_2_1_2; unsigned char x_2_1_3[32]; } x2; int x3; }*)arg1;
- (void)finalize;
- (id)getDevice;
- (unsigned short)getIncomingMTU;
- (id)getKey;
- (struct OpaqueIOBluetoothObjectRef { }*)getL2CAPChannelRef;
- (unsigned short)getLocalChannelID;
- (unsigned long long)getObjectID;
- (unsigned short)getOutgoingMTU;
- (unsigned short)getPSM;
- (unsigned short)getRemoteChannelID;
- (void)handleMachMessage:(void*)arg1;
- (unsigned short)incomingMTU;
- (id)init;
- (id)initWithIOService:(unsigned int)arg1;
- (int)instantiateOnDevice:(id)arg1;
- (BOOL)isIncoming;
- (BOOL)isValid;
- (unsigned short)localChannelID;
- (void)logDescription:(const char *)arg1;
- (unsigned long long)objectID;
- (unsigned short)outgoingMTU;
- (void)processIncomingData:(struct IOBluetoothUserMessageBlock { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; int x_1_1_6; } x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; int x6; }*)arg1;
- (id)registerForChannelCloseNotification:(id)arg1 selector:(SEL)arg2;
- (int)registerIncomingDataListener:(int (*)arg1 refCon:(void*)arg2;
- (int)registerIncomingEventListener:(int (*)arg1 refCon:(void*)arg2;
- (unsigned short)remoteChannelID;
- (int)requestRemoteMTU:(unsigned short)arg1;
- (int)setDelegate:(id)arg1;
- (int)setDelegate:(id)arg1 withConfiguration:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setObjectID:(unsigned long long)arg1;
- (void)setPSM:(unsigned short)arg1;
- (int)startStopFlow:(BOOL)arg1;
- (void)updateFromNewIOService:(unsigned int)arg1;
- (int)waitforChanneOpen;
- (int)write:(void*)arg1 length:(unsigned short)arg2;
- (int)writeAsync:(void*)arg1 length:(unsigned short)arg2 refcon:(void*)arg3;
- (int)writeSync:(void*)arg1 length:(unsigned short)arg2;

@end