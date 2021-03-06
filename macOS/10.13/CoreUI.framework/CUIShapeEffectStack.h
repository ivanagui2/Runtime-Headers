/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
 */

@interface CUIShapeEffectStack : NSObject {
    unsigned long long  bevelEmbossCount;
    struct { unsigned int x1; float x2; float x3; float x4; float x5; BOOL x6; } * colorOverlay;
    unsigned long long  colorOverlayCount;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; unsigned int x13; } * emboss;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; } * engraveShadow;
    unsigned long long  engraveShadowCount;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; } * extraShadow;
    unsigned long long  extraShadowCount;
    struct { float x1; float x2; float x3; float x4; float x5; BOOL x6; } * hueSaturation;
    unsigned long long  hueSaturationCount;
    struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; } * innerGlow;
    unsigned long long  innerGlowCount;
    struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } * innerGradient;
    unsigned long long  innerGradientCount;
    struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; } * innerShadow;
    unsigned long long  innerShadowCount;
    struct { float x1; float x2; float x3; float x4; float x5; float x6; } * outerGlow;
    unsigned long long  outerGlowCount;
    unsigned int  outputBlendMode;
    float  outputOpacity;
    int  renderStrategy;
    float  scalefactor;
    float  shapeOpacity;
}

@property (atomic, readonly) unsigned int outputBlendMode;

+ (id)adjustOpacity:(id)arg1 by:(float)arg2;
+ (id)bevelEmbossFrom:(id)arg1 withSize:(unsigned int)arg2 soften:(unsigned int)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 bevelStyle:(unsigned int)arg14;
+ (id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned int)arg3;
+ (id)blur:(id)arg1 radius:(float)arg2;
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)composite:(id)arg1 atop:(id)arg2;
+ (id)composite:(id)arg1 into:(id)arg2;
+ (id)composite:(id)arg1 outOf:(id)arg2;
+ (id)composite:(id)arg1 over:(id)arg2;
+ (id)gradientWithParameters:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)hueSaturationFrom:(id)arg1 withCenterAngle:(double)arg2 width:(double)arg3 tintRed:(float)arg4 tintGreen:(float)arg5 tintBlue:(float)arg6;
+ (id)image:(id)arg1 withOpacity:(float)arg2;
+ (id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3;
+ (id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (id)innerShadowFrom:(id)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)invert:(id)arg1;
+ (id)offset:(id)arg1 by:(struct CGPoint { double x1; double x2; })arg2;
+ (id)outerGlowFrom:(id)arg1 withSize:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)outerShadowFrom:(id)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 size:(unsigned int)arg3 spread:(unsigned int)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8;
+ (id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(struct CGPoint { double x1; double x2; })arg3;
+ (id)preferredCIContextOptions;
+ (id)rectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
+ (id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(struct CGPoint { double x1; double x2; })arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(BOOL)arg21 hasOutsideShadowBlur:(BOOL)arg22;
+ (id)sharedCIContext;
+ (id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3;

- (void)_cleanupEffectSettings;
- (void)_normalizeEffectParameters;
- (BOOL)_precompositeColorOverlayInnerGradient;
- (void)_setBevelEmbossAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setColorFillAtIndex:(unsigned long long)arg1 FromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setEngraveShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setExtraShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setHueSaturationAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInnerGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInnerShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setInteriorGradientAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setOuterGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg1;
- (void)adjustEffectColorsToTemperature:(int)arg1 onlyTintableColors:(BOOL)arg2;
- (void)applyCustomForegroundColor:(struct CGColor { }*)arg1;
- (void)applyCustomForegroundColor:(struct CGColor { }*)arg1 tintEffectColors:(BOOL)arg2;
- (id)cacheKey;
- (int)cgBlendModeForOutputBlending;
- (float)colorOverlayOpacity;
- (id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; })effectInsetsWithScale:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })effectPaddingWithScale:(double)arg1;
- (id)effectPreset;
- (BOOL)hasBevelEmboss;
- (BOOL)hasColorOverlay;
- (BOOL)hasEngraveShadow;
- (BOOL)hasExtraShadow;
- (BOOL)hasHueSaturation;
- (BOOL)hasInnerGlow;
- (BOOL)hasInnerGradient;
- (BOOL)hasInnerShadow;
- (BOOL)hasOuterGlow;
- (id)imageWithAdjustedOutputOpacityOfImage:(id)arg1 opacity:(float)arg2;
- (id)imageWithAdjustedShapeOpacityOfImage:(id)arg1 opacity:(float)arg2;
- (id)imageWithBevelEmbossOfImage:(id)arg1 effect:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; unsigned int x13; })arg2;
- (id)imageWithColorOverlayOfImage:(id)arg1 effect:(struct { unsigned int x1; float x2; float x3; float x4; float x5; BOOL x6; })arg2;
- (id)imageWithEngraveShadowOfImage:(id)arg1 effect:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg2;
- (id)imageWithExtraShadowOfImage:(id)arg1 effect:(struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg2;
- (id)imageWithHueSaturationOfImage:(id)arg1 effect:(struct { float x1; float x2; float x3; float x4; float x5; BOOL x6; })arg2;
- (id)imageWithInnerGlowOfImage:(id)arg1 effect:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)imageWithInnerShadowOfImage:(id)arg1 effect:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; struct CGPoint { double x_9_1_1; double x_9_1_2; } x9; })arg2;
- (id)imageWithInteriorGradientFillOfImage:(id)arg1 effect:(struct { unsigned int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; })arg2;
- (id)imageWithOuterGlowOfImage:(id)arg1 effect:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2;
- (id)initWithEffectPreset:(id)arg1;
- (float)innerGradientOpacity;
- (struct CGImage { }*)newFlattenedImageFromShapeCGImage:(struct CGImage { }*)arg1;
- (struct CGImage { }*)newFlattenedImageFromShapeCGImage:(struct CGImage { }*)arg1 withScale:(double)arg2;
- (struct CGImage { }*)newFlattenedImageFromShapeCGImage:(struct CGImage { }*)arg1 withScale:(double)arg2 cache:(BOOL)arg3;
- (struct CGImage { }*)newFlattenedImageFromShapeCGImage:(struct CGImage { }*)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1;
- (unsigned int)outputBlendMode;
- (id)processedImageFromShapeImage:(id)arg1;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2 invertShadows:(BOOL)arg3;
- (id)processedImageFromShapePath:(struct CGPath { }*)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)scaleBrightnessOfEffectColorsByAmount:(double)arg1 onlyTintableColors:(BOOL)arg2;
- (void)scaleEffectParametersBy:(double)arg1;
- (id)standardEffectCompositeWithShapeImage:(id)arg1;
- (void)substituteTintableEffectsWithColor:(struct CGColor { }*)arg1;
- (void)updateOutputBlendingWithInteriorFillHeuristic;

@end
