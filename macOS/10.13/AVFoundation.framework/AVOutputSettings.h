/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVOutputSettings : NSObject <NSCopying> {
    NSDictionary * _outputSettingsDictionary;
}

@property (nonatomic, readonly) NSSet *compatibleMediaTypes;
@property (nonatomic, readonly) NSDictionary *outputSettingsDictionary;
@property (nonatomic, readonly) BOOL willYieldCompressedSamples;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)arg1 compatibilityDescription:(id*)arg2;
+ (id)defaultOutputSettingsForMediaType:(id)arg1;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)arg1;
+ (id)registeredOutputSettingsClasses;
+ (unsigned long long)validateOutputSettingsDictionary:(id)arg1;

- (BOOL)canFullySpecifyOutputFormatReturningReason:(id*)arg1;
- (id)compatibleMediaTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id*)arg1;
- (id)init;
- (id)initWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (id)outputSettingsDictionary;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (BOOL)willYieldCompressedSamples;

@end
