/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTMoviePlaybackControllerSelection : QTKeyValueProxy {
    struct { 
        long long timeValue; 
        long long timeScale; 
        long long flags; 
    }  _currentTime;
    NSTimer * _currentTimeTimer;
    double  _currentTimeTimerInterval;
    double  _currentTimeUpdateFrequency;
    unsigned int  _flags;
    unsigned int  _setValueForKeyDepth;
}

@property (nonatomic, readwrite) BOOL automaticallyPauseWhenSessionResignsActive;
@property (nonatomic, readwrite) BOOL automaticallyPreventsIdleSleep;
@property (nonatomic, readwrite) BOOL automaticallyScrubs;
@property (nonatomic, readwrite) double currentTimeUpdateFrequency;
@property (nonatomic, readwrite, retain) QTMovie *movie;

+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (BOOL)shouldProxyValueForCurrentTime;
+ (BOOL)shouldProxyValueForRemainingTime;

- (double)_effectiveUpdateInterval;
- (void)_startScrubbingIfAppropriate;
- (void)_stopScrubbing;
- (void)_updateCurrentTime:(id)arg1;
- (void)_updateCurrentTimeTimer;
- (BOOL)automaticallyPauseWhenSessionResignsActive;
- (BOOL)automaticallyPreventsIdleSleep;
- (BOOL)automaticallyScrubs;
- (id)currentTime;
- (double)currentTimeUpdateFrequency;
- (void)dealloc;
- (id)init;
- (id)movie;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)remainingTime;
- (void)setAutomaticallyPauseWhenSessionResignsActive:(BOOL)arg1;
- (void)setAutomaticallyPreventsIdleSleep:(BOOL)arg1;
- (void)setAutomaticallyScrubs:(BOOL)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setCurrentTimeUpdateFrequency:(double)arg1;
- (void)setMovie:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end