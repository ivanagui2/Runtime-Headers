/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothOBEXSession : OBEXSession <IOBluetoothRFCOMMChannelDelegate> {
    unsigned long long  bufferSize;
    unsigned long long  currentOffsetInBuffer;
    IOBluetoothDevice * mDevice;
    int (* mOpenConnectionCallback;
    void * mOpenConnectionCallbackRefCon;
    void * mOpenConnectionRefCon;
    SEL  mOpenConnectionSelector;
    id  mOpenConnectionSelectorTarget;
    unsigned int  mOpenConnectionTimeout;
    IOBluetoothRFCOMMChannel * mRFCOMMChannel;
    unsigned char  mRFCOMMChannelID;
    char * outBuffer;
    BOOL  waitingForRfcommSpace;
}

@property (atomic, readwrite) unsigned char channelID;
@property (atomic, readwrite, retain) IOBluetoothDevice *device;
@property (atomic, readwrite, retain) IOBluetoothRFCOMMChannel *rfcommChannel;

+ (id)withDevice:(id)arg1 channelID:(unsigned char)arg2;
+ (id)withIncomingRFCOMMChannel:(id)arg1 eventSelector:(SEL)arg2 selectorTarget:(id)arg3 refCon:(void*)arg4;
+ (id)withSDPServiceRecord:(id)arg1;

- (unsigned char)channelID;
- (int)closeTransportConnection;
- (void)connectionComplete:(id)arg1 status:(int)arg2;
- (void)dealloc;
- (id)device;
- (void)finalize;
- (id)getDevice;
- (id)getRFCOMMChannel;
- (unsigned char)getRFCOMMChannelID;
- (BOOL)hasOpenTransportConnection;
- (id)initWithDevice:(id)arg1 channelID:(unsigned char)arg2;
- (id)initWithIncomingRFCOMMChannel:(id)arg1 eventSelector:(SEL)arg2 selectorTarget:(id)arg3 refCon:(void*)arg4;
- (id)initWithSDPServiceRecord:(id)arg1;
- (BOOL)isSessionTargetAMac;
- (int)openTransportConnection:(SEL)arg1 selectorTarget:(id)arg2 refCon:(void*)arg3;
- (void)restartTransmission;
- (id)rfcommChannel;
- (void)rfcommChannelClosed:(id)arg1;
- (void)rfcommChannelData:(id)arg1 data:(void*)arg2 length:(unsigned long long)arg3;
- (void)rfcommChannelOpenComplete:(id)arg1 status:(int)arg2;
- (void)rfcommChannelQueueSpaceAvailable:(id)arg1;
- (void)rfcommChannelWriteComplete:(id)arg1 refcon:(void*)arg2 status:(int)arg3;
- (int)sendBufferTroughChannel;
- (int)sendDataToTransport:(void*)arg1 dataLength:(unsigned long long)arg2;
- (void)setChannelID:(unsigned char)arg1;
- (void)setDevice:(id)arg1;
- (void)setOBEXSessionOpenConnectionCallback:(int (*)arg1 refCon:(void*)arg2;
- (void)setOpenTransportConnectionAsyncSelector:(SEL)arg1 target:(id)arg2 refCon:(id)arg3;
- (void)setRfcommChannel:(id)arg1;

@end
