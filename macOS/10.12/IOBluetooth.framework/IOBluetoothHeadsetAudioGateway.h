/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IOBluetooth.framework/Versions/A/IOBluetooth
 */

@interface IOBluetoothHeadsetAudioGateway : IOBluetoothHandsFreeAudioGateway

+ (id)deviceUUID;
+ (id)localUUID;

- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
- (void)processATCommand:(id)arg1;
- (void)setHandsFreeState:(int)arg1;
- (void)setIndicator:(id)arg1 value:(int)arg2;

@end