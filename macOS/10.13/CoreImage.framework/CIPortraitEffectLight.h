/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPortraitEffectLight : CIPortraitEffect

- (id)_enrich;
- (id)_eyeBrightenSoftlight;
- (id)_mixKernel;
- (id)_swapRB;
- (id)_swapRG;
- (id)_textureAdd;
- (id)_textureDiff;
- (id)_whitenTeeth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })allFaceLandmarksBoundingRect;
- (id)enrichImage:(id)arg1;
- (id)eyeBlurForLandmarks:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceLandmarkBoundingRect:(id)arg1;
- (id)imageForLandmarks:(id)arg1 scaledInputImage:(id)arg2 scaleFactor:(double)arg3;
- (id)outputImage;

@end
