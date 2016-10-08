/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {
    CUIPSDGradient * _gradient;
}

@property (atomic, readwrite, retain) CUIPSDGradient *gradient;

- (void)dealloc;
- (unsigned int)effectType;
- (id)gradient;
- (id)init;
- (void)setGradient:(id)arg1;

// CUIPSDLayerEffectGradientOverlay (CUIShapeEffectPresetLayerEffectsSupport)

- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end