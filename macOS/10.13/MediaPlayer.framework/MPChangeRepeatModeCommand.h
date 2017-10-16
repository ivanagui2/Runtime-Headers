/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
 */

@interface MPChangeRepeatModeCommand : MPRemoteCommand {
    long long  _currentRepeatType;
    NSArray * _supportedRepeatTypes;
}

@property (nonatomic, readwrite) long long currentRepeatType;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (long long)currentRepeatType;
- (id)newCommandEventWithType:(long long)arg1;
- (id)newCommandEventWithType:(long long)arg1 preservesRepeatMode:(BOOL)arg2;
- (void)setCurrentRepeatType:(long long)arg1;
- (void)setSupportedRepeatTypes:(id)arg1;

@end