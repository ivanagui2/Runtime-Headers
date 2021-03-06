/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLAnimationWindowEffect : QLWindowEffect <NSAnimationDelegate> {
    QLWindowAnimation * _animation;
    unsigned int  _cid;
    BOOL  _inverted;
    BOOL  _mainEffect;
    double  _parentEffectDuration;
    id  _postSubEffectsCompletionBlock;
    NSArray * _subEffects;
    unsigned int  _windowID;
}

@property (atomic, readonly) double additionalDuration;
@property (atomic, readwrite, retain) QLWindowAnimation *animation;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readwrite) BOOL inverted;
@property (atomic, readwrite) double parentEffectDuration;
@property (atomic, readwrite, copy) id postSubEffectsCompletionBlock;
@property (atomic, readwrite) float progress;
@property (atomic, readwrite, retain) NSArray *subEffects;
@property (atomic, readonly) Class superclass;

- (void)_setProgress:(float)arg1;
- (void)abort;
- (double)additionalDuration;
- (id)animation;
- (void)animationDidEnd:(id)arg1;
- (void)dealloc;
- (void)done;
- (id)initWithWindow:(id)arg1 animation:(id)arg2;
- (void)invertWithCompletionBlock:(id)arg1;
- (BOOL)inverted;
- (void)invoke;
- (double)parentEffectDuration;
- (id)postSubEffectsCompletionBlock;
- (id)prepare;
- (float)progress;
- (void)setAnimation:(id)arg1;
- (void)setInverted:(BOOL)arg1;
- (void)setParentEffectDuration:(double)arg1;
- (void)setPostSubEffectsCompletionBlock:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setSubEffects:(id)arg1;
- (void)setValue:(float)arg1;
- (void)setWindow:(id)arg1;
- (BOOL)stop;
- (id)subEffectWithID:(unsigned int)arg1;
- (id)subEffects;

@end
