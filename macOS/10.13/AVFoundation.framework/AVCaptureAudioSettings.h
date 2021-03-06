/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVCaptureAudioSettings : AVCaptureOutputSettings {
    AVAudioOutputSettings * _avAudioOutputSettings;
}

@property (nonatomic, readonly) AVAudioOutputSettings *avAudioOutputSettings;

- (id)avAudioOutputSettings;
- (void)dealloc;
- (id)initWithAudioSettingsDictionary:(id)arg1;
- (id)initWithTrustedAudioSettingsDictionary:(id)arg1;
- (id)outputSettingsDictionary;

@end
