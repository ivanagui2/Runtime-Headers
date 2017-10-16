/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIPortraitLightingNeckContour : CIFilter {
    CIVector * inputCenter;
    CIVector * inputChin;
    NSNumber * inputFaceOrientation;
    NSNumber * inputHeight;
    CIImage * inputImage;
    NSNumber * inputOrientation;
    NSNumber * inputScale;
    NSNumber * inputStrength;
    NSNumber * inputWidth;
}

@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) CIVector *inputChin;
@property (nonatomic, readwrite, retain) NSNumber *inputFaceOrientation;
@property (nonatomic, readwrite, retain) NSNumber *inputHeight;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputOrientation;
@property (nonatomic, readwrite, retain) NSNumber *inputScale;
@property (nonatomic, readwrite, retain) NSNumber *inputStrength;
@property (nonatomic, readwrite, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_neckContourKernel;
- (id)inputCenter;
- (id)inputChin;
- (id)inputFaceOrientation;
- (id)inputHeight;
- (id)inputImage;
- (id)inputOrientation;
- (id)inputScale;
- (id)inputStrength;
- (id)inputWidth;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputChin:(id)arg1;
- (void)setInputFaceOrientation:(id)arg1;
- (void)setInputHeight:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOrientation:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end