/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIDisintegrateWithMaskTransition : CIFilter {
    CIImage * inputImage;
    CIImage * inputMaskImage;
    NSNumber * inputShadowDensity;
    CIVector * inputShadowOffset;
    NSNumber * inputShadowRadius;
    CIImage * inputTargetImage;
    NSNumber * inputTime;
}

@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) CIImage *inputMaskImage;
@property (nonatomic, readwrite, retain) NSNumber *inputShadowDensity;
@property (nonatomic, readwrite, retain) CIVector *inputShadowOffset;
@property (nonatomic, readwrite, retain) NSNumber *inputShadowRadius;
@property (nonatomic, readwrite, retain) CIImage *inputTargetImage;
@property (nonatomic, readwrite, retain) NSNumber *inputTime;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelG;
- (id)inputImage;
- (id)inputMaskImage;
- (id)inputShadowDensity;
- (id)inputShadowOffset;
- (id)inputShadowRadius;
- (id)inputTargetImage;
- (id)inputTime;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;
- (void)setInputShadowDensity:(id)arg1;
- (void)setInputShadowOffset:(id)arg1;
- (void)setInputShadowRadius:(id)arg1;
- (void)setInputTargetImage:(id)arg1;
- (void)setInputTime:(id)arg1;

@end