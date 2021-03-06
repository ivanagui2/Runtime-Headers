/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMovie_AsyncLoadHelper : QTMovieMediaHelper {
    BOOL  _active;
    BOOL  _activeAndVisible;
    BOOL  _activeAndVisibleWasSet;
    BOOL  _activeWasSet;
    NSString * _apertureMode;
    BOOL  _apertureModeWasSet;
    BOOL  _autoplayAtRateWasRequested;
    float  _autoplayRate;
    BOOL  _autoplayWasRequested;
    float  _balance;
    BOOL  _balanceWasSet;
    float  _bass;
    BOOL  _bassWasSet;
    BOOL  _delegateWasSet;
    BOOL  _editable;
    BOOL  _editableWasSet;
    float  _gain;
    BOOL  _gainWasSet;
    NSDictionary * _initAttributesForLoadingMediaHelper;
    BOOL  _instantiateOnLoadingThread;
    long long  _language;
    BOOL  _languageWasSet;
    NSError * _loadingError;
    QTMovieMediaHelper * _loadingMediaHelper;
    Class  _loadingMediaHelperClass;
    BOOL  _loops;
    BOOL  _loopsBackAndForth;
    BOOL  _loopsBackAndForthWasSet;
    BOOL  _loopsWasSet;
    BOOL  _muted;
    BOOL  _mutedWasSet;
    QTMovie * _parent;
    BOOL  _playsAllFrames;
    BOOL  _playsAllFramesWasSet;
    BOOL  _playsSelectionOnly;
    BOOL  _playsSelectionOnlyWasSet;
    float  _treble;
    BOOL  _trebleWasSet;
    BOOL  _usesPreferredLanguage;
    BOOL  _usesPreferredLanguageWasSet;
    NSColor * _visualBackgroundColor;
    BOOL  _visualBackgroundColorWasSet;
    float  _visualBrightness;
    BOOL  _visualBrightnessWasSet;
    float  _visualContrast;
    BOOL  _visualContrastWasSet;
    BOOL  _visualDrawsMovieBoxBackgroundColor;
    BOOL  _visualDrawsMovieBoxBackgroundColorWasSet;
    float  _visualHue;
    BOOL  _visualHueWasSet;
    NSColor * _visualMovieBoxBackgroundColor;
    BOOL  _visualMovieBoxBackgroundColorWasSet;
    float  _visualSaturation;
    BOOL  _visualSaturationWasSet;
    float  _volume;
    BOOL  _volumeWasSet;
    BOOL  _wasInvalidated;
}

- (void)_loadMediaHelperOnBackgroundThreadWithAttributes:(id)arg1;
- (void)_mediaHelperFinishedLoadingWithError:(id)arg1;
- (id)apertureMode;
- (void)autoplay;
- (void)autoplay:(float)arg1;
- (float)balance;
- (float)bass;
- (void)copyStateFromMediaHelper:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1 forParent:(id)arg2;
- (void)dealloc;
- (id)diagnosticString;
- (struct { long long x1; long long x2; long long x3; })duration;
- (BOOL)editable;
- (float)gain;
- (id)initWithAttributes:(id)arg1 error:(id*)arg2 forParent:(id)arg3;
- (void)invalidate;
- (BOOL)isActive;
- (BOOL)isMuted;
- (long long)language;
- (long long)loadState;
- (id)loadStateError;
- (BOOL)loops;
- (BOOL)loopsBackAndForth;
- (struct { long long x1; long long x2; long long x3; })maxTimeLoaded;
- (BOOL)playsAllFrames;
- (BOOL)playsSelectionOnly;
- (void)setActive:(BOOL)arg1;
- (void)setActiveAndVisible:(BOOL)arg1;
- (void)setApertureMode:(id)arg1;
- (void)setBalance:(float)arg1;
- (void)setBass:(float)arg1;
- (void)setCurrentTime:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setGain:(float)arg1;
- (void)setLanguage:(long long)arg1;
- (void)setLoops:(BOOL)arg1;
- (void)setLoopsBackAndForth:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setPlaysAllFrames:(BOOL)arg1;
- (void)setPlaysSelectionOnly:(BOOL)arg1;
- (void)setRate:(float)arg1;
- (void)setTreble:(float)arg1;
- (void)setUsesPreferredLanguage:(BOOL)arg1;
- (void)setVisualBackgroundColor:(id)arg1;
- (void)setVisualBrightness:(float)arg1;
- (void)setVisualContrast:(float)arg1;
- (void)setVisualDrawsMovieBoxBackgroundColor:(BOOL)arg1;
- (void)setVisualHue:(float)arg1;
- (void)setVisualMovieBoxBackgroundColor:(id)arg1;
- (void)setVisualSaturation:(float)arg1;
- (void)setVolume:(float)arg1;
- (int)status;
- (void)transferStateToMediaHelper:(id)arg1;
- (float)treble;
- (BOOL)usesVisualContext;
- (id)visualBackgroundColor;
- (float)visualBrightness;
- (float)visualContrast;
- (BOOL)visualDrawsMovieBoxBackgroundColor;
- (float)visualHue;
- (id)visualMovieBoxBackgroundColor;
- (float)visualSaturation;
- (float)volume;
- (BOOL)wouldUseVisualContext;

@end
