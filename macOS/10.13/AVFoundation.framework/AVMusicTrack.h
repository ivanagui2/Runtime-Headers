/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVMusicTrack : NSObject {
    void * _impl;
}

@property (nonatomic, readwrite, retain) AVAudioUnit *destinationAudioUnit;
@property (nonatomic, readwrite) unsigned int destinationMIDIEndpoint;
@property (nonatomic, readwrite) double lengthInBeats;
@property (nonatomic, readwrite) double lengthInSeconds;
@property (nonatomic, readwrite) struct _AVBeatRange { double x1; double x2; } loopRange;
@property (getter=isLoopingEnabled, nonatomic, readwrite) BOOL loopingEnabled;
@property (getter=isMuted, nonatomic, readwrite) BOOL muted;
@property (nonatomic, readwrite) long long numberOfLoops;
@property (nonatomic, readwrite) double offsetTime;
@property (getter=isSoloed, nonatomic, readwrite) BOOL soloed;
@property (nonatomic, readonly) unsigned long long timeResolution;

- (void)dealloc;
- (id)destinationAudioUnit;
- (unsigned int)destinationMIDIEndpoint;
- (unsigned long long)index;
- (id)initWithImpl:(struct MusicTrackImpl { struct OpaqueMusicTrack {} *x1; id x2; unsigned int x3; }*)arg1;
- (BOOL)isLoopingEnabled;
- (BOOL)isMuted;
- (BOOL)isSoloed;
- (double)lengthInBeats;
- (double)lengthInSeconds;
- (struct _AVBeatRange { double x1; double x2; })loopRange;
- (long long)numberOfLoops;
- (double)offsetTime;
- (void)setDestinationAudioUnit:(id)arg1;
- (void)setDestinationMIDIEndpoint:(unsigned int)arg1;
- (void)setLengthInBeats:(double)arg1;
- (void)setLengthInSeconds:(double)arg1;
- (void)setLoopRange:(struct _AVBeatRange { double x1; double x2; })arg1;
- (void)setLoopingEnabled:(BOOL)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setNumberOfLoops:(long long)arg1;
- (void)setOffsetTime:(double)arg1;
- (void)setSoloed:(BOOL)arg1;
- (void)setUsesAutomatedParameters:(BOOL)arg1;
- (unsigned long long)timeResolution;
- (struct OpaqueMusicTrack { }*)track;
- (BOOL)usesAutomatedParameters;

@end