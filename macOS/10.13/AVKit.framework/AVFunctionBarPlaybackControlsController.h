/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVFunctionBarPlaybackControlsController : NSObject <AVFunctionBarMediaSelectionControlling, AVFunctionBarPlaybackControlsControllingInternal, AVFunctionBarScrubberControlling, AVFunctionBarTrackControlling, AVTimeControlling> {
    struct { 
        BOOL _isPlaying; 
        BOOL _setPlaying; 
        BOOL _canTogglePlayback; 
        BOOL _togglePlayback; 
        BOOL _seekableTimeRanges; 
        BOOL _audioFunctionBarMediaSelectionOptions; 
        BOOL _currentAudioFunctionBarMediaSelectionOption; 
        BOOL _setCurrentAudioFunctionBarMediaSelectionOption; 
        BOOL _legibleFunctionBarMediaSelectionOptions; 
        BOOL _currentLegibleFunctionBarMediaSelectionOption; 
        BOOL _setCurrentLegibleFunctionBarMediaSelectionOption; 
        BOOL _canBeginFunctionBarScrubbing; 
        BOOL _beginFunctionBarScrubbing; 
        BOOL _endFunctionBarScrubbing; 
        BOOL _generateFunctionBarThumbnailsForTimesSizeCompletionHandler; 
        BOOL _generateFunctionBarAudioAmplitudeSamplesCompletionHandler; 
        BOOL _cancelThumbnailAndAudioAmplitudeSampleGeneration; 
        BOOL _assetURL; 
        BOOL _controlsViewWillAppear; 
        BOOL _controlsViewDidDisappear; 
    }  _externalControllerRespondsTo;
    <AVFunctionBarPlaybackControlsControlling> * _externalFunctionBarPlaybackControlsController;
    AVThumbnailGenerator * _thumbnailGenerator;
    AVWaveformGenerator * _waveformGenerator;
}

@property (atomic, readonly) NSArray *audioFunctionBarMediaSelectionOptions;
@property (atomic, readonly) BOOL canBeginFunctionBarScrubbing;
@property (atomic, readonly) BOOL canScanBackward;
@property (atomic, readonly) BOOL canScanForward;
@property (atomic, readonly) BOOL canTogglePlayback;
@property (getter=isCompletelySeekable, atomic, readonly) BOOL completelySeekable;
@property (atomic, readonly) double contentDuration;
@property (atomic, readonly) double contentDurationWithinEndTimes;
@property (atomic, readwrite, retain) AVFunctionBarMediaSelectionOption *currentAudioFunctionBarMediaSelectionOption;
@property (atomic, readwrite, retain) AVFunctionBarMediaSelectionOption *currentLegibleFunctionBarMediaSelectionOption;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite) <AVFunctionBarPlaybackControlsControlling> *externalFunctionBarPlaybackControlsController;
@property (atomic, readonly) BOOL hasAudioFunctionBarMediaSelectionOptions;
@property (atomic, readonly) BOOL hasEnabledAudio;
@property (atomic, readonly) BOOL hasEnabledVideo;
@property (atomic, readonly) BOOL hasFunctionBarMediaSelectionOptions;
@property (atomic, readonly) BOOL hasLegibleFunctionBarMediaSelectionOptions;
@property (atomic, readonly) BOOL hasLiveStreamingContent;
@property (atomic, readonly) BOOL hasSeekableLiveStreamingContent;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSArray *legibleFunctionBarMediaSelectionOptions;
@property (atomic, readonly) double maxTime;
@property (atomic, readonly) AVValueTiming *maxTiming;
@property (atomic, readonly) double minTime;
@property (atomic, readonly) AVValueTiming *minTiming;
@property (getter=isPlaying, atomic, readwrite) BOOL playing;
@property (atomic, readonly) double seekToTime;
@property (atomic, readonly) NSArray *seekableTimeRanges;
@property (getter=isSeeking, atomic, readonly) BOOL seeking;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) AVValueTiming *timing;

+ (BOOL)automaticallyNotifiesObserversOfAudioFunctionBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfCanBeginFunctionBarScrubbing;
+ (BOOL)automaticallyNotifiesObserversOfContentDuration;
+ (BOOL)automaticallyNotifiesObserversOfCurrentAudioFunctionBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfCurrentLegibleFunctionBarMediaSelectionOption;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledAudio;
+ (BOOL)automaticallyNotifiesObserversOfHasEnabledVideo;
+ (BOOL)automaticallyNotifiesObserversOfLegibleFunctionBarMediaSelectionOptions;
+ (BOOL)automaticallyNotifiesObserversOfSeekToTime;
+ (BOOL)automaticallyNotifiesObserversOfSeeking;
+ (BOOL)automaticallyNotifiesObserversOfTiming;
+ (id)keyPathsForValuesAffectingAudioFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanBeginFunctionBarScrubbing;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentAudioFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingCurrentLegibleFunctionBarMediaSelectionOption;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingLegibleFunctionBarMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMaxTiming;
+ (id)keyPathsForValuesAffectingMinTiming;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingSeekToTime;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingSeeking;
+ (id)keyPathsForValuesAffectingTiming;

- (void).cxx_destruct;
- (id)audioFunctionBarMediaSelectionOptions;
- (void)beginFunctionBarScrubbing;
- (BOOL)canBeginFunctionBarScrubbing;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canTogglePlayback;
- (void)cancelThumbnailAndAudioAmplitudeSampleGenerationForRequestTypeLegacy:(long long)arg1;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
- (id)currentAudioFunctionBarMediaSelectionOption;
- (id)currentLegibleFunctionBarMediaSelectionOption;
- (void)endFunctionBarScrubbing;
- (id)externalFunctionBarPlaybackControlsController;
- (void)generateFunctionBarAudioAmplitudeSamples:(long long)arg1 completionHandler:(id)arg2;
- (void)generateFunctionBarThumbnailsForTimes:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 requestType:(long long)arg3 completionHandler:(id)arg4;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioFunctionBarMediaSelectionOptions;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasFunctionBarMediaSelectionOptions;
- (BOOL)hasLegibleFunctionBarMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasSeekableLiveStreamingContent;
- (BOOL)isCompletelySeekable;
- (BOOL)isPlaying;
- (BOOL)isSeeking;
- (id)legibleFunctionBarMediaSelectionOptions;
- (double)maxTime;
- (id)maxTiming;
- (double)minTime;
- (id)minTiming;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (double)seekToTime;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (void)setCurrentAudioFunctionBarMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleFunctionBarMediaSelectionOption:(id)arg1;
- (void)setExternalFunctionBarPlaybackControlsController:(id)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (id)timing;
- (void)togglePlayback:(id)arg1;

@end