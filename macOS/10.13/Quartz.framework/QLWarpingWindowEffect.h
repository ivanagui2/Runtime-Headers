/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLWarpingWindowEffect : QLAnimationWindowEffect {
    id  _pointBlock;
    id  _setupBlock;
}

@property (atomic, readwrite, copy) id pointBlock;
@property (atomic, readwrite, copy) id setupBlock;

+ (id)warpingEffectForWindow:(id)arg1 duration:(double)arg2;

- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)dealloc;
- (void)finalize;
- (id)pointBlock;
- (id)prepare;
- (void)setPointBlock:(id)arg1;
- (void)setSetupBlock:(id)arg1;
- (void)setValue:(float)arg1;
- (id)setupBlock;

@end