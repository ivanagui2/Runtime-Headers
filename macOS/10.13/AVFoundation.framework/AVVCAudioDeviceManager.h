/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVVCAudioDeviceManager : NSObject {
    void * _impl;
}

@property (atomic, readonly) unsigned int inputDeviceID;
@property (atomic, readonly) unsigned int outputDeviceID;

+ (BOOL)IsDeviceBuiltIn:(id)arg1;
+ (float)gainOnDevice:(unsigned int)arg1;
+ (bool)isDeviceMuted:(unsigned int)arg1;
+ (void)setClientDescriptionKind:(unsigned int)arg1 onDevice:(unsigned int)arg2;
+ (void)setGain:(float)arg1 onDevice:(unsigned int)arg2;
+ (void)setMute:(bool)arg1 onDevice:(unsigned int)arg2;

- (id)init;
- (id)initWithActivationContext:(id)arg1;
- (unsigned int)inputDeviceID;
- (unsigned int)outputDeviceID;
- (void)selectDeviceForActivationMode:(id)arg1;

@end
