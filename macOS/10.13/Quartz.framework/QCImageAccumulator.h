/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCImageAccumulator : QCPatch {
    CIImageAccumulator * _accumulator;
    int  _accumulatorFormat;
    BOOL  _continuous;
    unsigned long long  _mipmapLevels;
    unsigned int  _target;
    QCBooleanPort * inputAccumulate;
    QCNumberPort * inputDirtyHeight;
    QCNumberPort * inputDirtyOriginX;
    QCNumberPort * inputDirtyOriginY;
    QCNumberPort * inputDirtyWidth;
    QCIndexPort * inputHeight;
    QCImagePort * inputImage;
    QCIndexPort * inputWidth;
    QCImagePort * outputImage;
}

+ (BOOL)allowsSubpatchesWithIdentifier:(id)arg1;
+ (BOOL)isSafe;
+ (unsigned long long)stateVersionWithIdentifier:(id)arg1;

- (BOOL)_updateAccumulator:(id)arg1;
- (int)accumulatorFormat;
- (void)cleanup:(id)arg1;
- (BOOL)execute:(id)arg1 time:(double)arg2 arguments:(id)arg3;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isContinuous;
- (void)receiveMessage:(id)arg1 name:(id)arg2 attributes:(id)arg3;
- (void)setAccumulatorFormat:(int)arg1;
- (void)setIsContinuous:(BOOL)arg1;
- (BOOL)setState:(id)arg1;
- (BOOL)setup:(id)arg1;
- (id)state;
- (void)updateTimebase:(int)arg1;

// QCImageAccumulator (QCInspector)

+ (Class)inspectorClassWithIdentifier:(id)arg1;

@end
