/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPortraitEffectContour : CIPortraitEffect {
    NSNumber * inputContour;
    CIImage * inputDepthMap;
    NSNumber * inputDepthThreshold;
    NSNumber * inputFaceLight;
    NSNumber * inputKickLight;
}

@property (nonatomic, readwrite, retain) NSNumber *inputContour;
@property (nonatomic, readwrite, retain) CIImage *inputDepthMap;
@property (nonatomic, readwrite, retain) NSNumber *inputDepthThreshold;
@property (nonatomic, readwrite, retain) NSNumber *inputFaceLight;
@property (nonatomic, readwrite, retain) NSNumber *inputKickLight;

- (id)_applyVignette;
- (id)_blendSingleChannelMask;
- (id)_faceVignette;
- (id)_mixKernel;
- (id)_prepareDepth;
- (id)backgroundPreviewCubeName;
- (id)inputContour;
- (id)inputDepthMap;
- (id)inputDepthThreshold;
- (id)inputFaceLight;
- (id)inputKickLight;
- (id)outputImage;
- (id)previewCubeName;
- (void)setDefaults;
- (void)setInputContour:(id)arg1;
- (void)setInputDepthMap:(id)arg1;
- (void)setInputDepthThreshold:(id)arg1;
- (void)setInputFaceLight:(id)arg1;
- (void)setInputKickLight:(id)arg1;

@end
