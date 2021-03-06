/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/Versions/A/ToneLibrary
 */

@interface TLCapabilitiesManager : NSObject {
    NSDictionary * _deviceCodeNameSimplicationMapping;
}

@property (getter=isAlertToneStoreAvailable, nonatomic, readonly) BOOL alertToneStoreAvailable;
@property (nonatomic, readonly) NSString *deviceCodeName;
@property (nonatomic, readonly) BOOL hasUserGeneratedVibrationsCapability;
@property (nonatomic, readonly) BOOL hasVibratorCapability;
@property (getter=isRingtoneStoreAvailable, nonatomic, readonly) BOOL ringtoneStoreAvailable;
@property (nonatomic, readonly) NSString *simplifiedDeviceCodeName;

+ (id)sharedCapabilitiesManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceCodeName;
- (BOOL)hasUserGeneratedVibrationsCapability;
- (BOOL)hasVibratorCapability;
- (id)init;
- (BOOL)isAlertToneStoreAvailable;
- (BOOL)isRingtoneStoreAvailable;
- (id)simplifiedDeviceCodeName;

@end
