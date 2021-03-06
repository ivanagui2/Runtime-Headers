/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
 */

@interface AVAudioRecorder : NSObject {
    void * _impl;
}

@property (atomic, readonly) double currentTime;
@property (atomic, readwrite) <AVAudioRecorderDelegate> *delegate;
@property (atomic, readonly) double deviceCurrentTime;
@property (atomic, readonly) AVAudioFormat *format;
@property (nonatomic, readwrite) BOOL instantaneousMetering;
@property (getter=isMeteringEnabled, atomic, readwrite) BOOL meteringEnabled;
@property (getter=isRecording, atomic, readonly) BOOL recording;
@property (atomic, readonly) NSDictionary *settings;
@property (atomic, readonly) NSURL *url;

- (float)averagePowerForChannel:(unsigned long long)arg1;
- (id)baseInit;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (BOOL)deleteRecording;
- (double)deviceCurrentTime;
- (void)finalize;
- (void)finishedRecording;
- (id)format;
- (struct AudioRecorderImpl { id x1; id x2; id x3; struct AudioStreamBasicDescription { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; } x4; struct OpaqueAudioFileID {} *x5; struct OpaqueAudioQueue {} *x6; long long x7; long long x8; long long x9; double x10; double x11; double x12; unsigned long long x13; char *x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; struct AudioQueueLevelMeterState {} *x24; struct AudioQueueBuffer {} *x25[4]; struct AudioQueueBuffer {} *x26; bool x27; }*)impl;
- (id)initWithURL:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (BOOL)instantaneousMetering;
- (BOOL)isMeteringEnabled;
- (BOOL)isRecording;
- (void)pause;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (BOOL)prepareToRecord;
- (void)privCommonCleanup;
- (void)privRemoveSessionPropertyListeners;
- (BOOL)record;
- (BOOL)recordAtTime:(double)arg1;
- (BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (BOOL)recordForDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstantaneousMetering:(BOOL)arg1;
- (void)setMeteringEnabled:(BOOL)arg1;
- (id)settings;
- (void)stop;
- (void)updateMeters;
- (id)url;

@end
