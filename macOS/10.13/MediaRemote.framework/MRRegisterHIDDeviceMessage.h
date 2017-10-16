/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor * _deviceDescriptor;
}

@property (nonatomic, readonly, copy) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (void)dealloc;
- (id)deviceDescriptor;
- (id)initWithDeviceDescriptor:(id)arg1;
- (unsigned long long)type;

@end