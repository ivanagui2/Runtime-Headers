/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothConcreteUserNotification : IOBluetoothUserNotification {
    int (* mCallback;
    int  mDirection;
    unsigned short  mL2CAPPSM;
    int  mNotificationType;
    unsigned char  mRFCOMMChannelID;
    void * mRefCon;
    id  mRegisteredObject;
    SEL  mSelector;
    unsigned char  mSelfRegistered;
    id  mWatchedObject;
}

@property (atomic, readwrite) unsigned short L2CAPPSM;
@property (atomic, readwrite) unsigned char RFCOMMChannelID;
@property (atomic, readwrite) int (*callback;
@property (atomic, readwrite) int direction;
@property (atomic, readwrite) int notificationType;
@property (atomic, readwrite) void*refCon;
@property (atomic, readwrite) id registeredObject;
@property (atomic, readwrite) SEL selector;
@property (atomic, readwrite) id watchedObject;

- (unsigned short)L2CAPPSM;
- (unsigned char)RFCOMMChannelID;
- (int (*)callback;
- (int)direction;
- (void)l2capNotificationRoutine:(id)arg1;
- (void)notificationRoutine:(id)arg1;
- (int)notificationType;
- (void)objcL2CAPNotificationRoutine:(id)arg1;
- (void)objcNotificationRoutine:(id)arg1;
- (void)objcRFCOMMNotificationRoutine:(id)arg1;
- (void*)refCon;
- (id)registeredObject;
- (void)rfcommNotificationRoutine:(id)arg1;
- (SEL)selector;
- (void)setCallback:(int (*)arg1;
- (void)setDirection:(int)arg1;
- (void)setL2CAPPSM:(unsigned short)arg1;
- (void)setNotificationType:(int)arg1;
- (void)setRFCOMMChannelID:(unsigned char)arg1;
- (void)setRefCon:(void*)arg1;
- (void)setRegisteredObject:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setSelfRegistered;
- (void)setWatchedObject:(id)arg1;
- (void)unregister;
- (id)watchedObject;

@end
