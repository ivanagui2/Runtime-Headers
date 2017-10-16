/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIGaussianGradient : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor0;
    CIColor * inputColor1;
    NSNumber * inputRadius;
}

@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) CIColor *inputColor0;
@property (nonatomic, readwrite, retain) CIColor *inputColor1;
@property (nonatomic, readwrite, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputColor0;
- (id)inputColor1;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputColor0:(id)arg1;
- (void)setInputColor1:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end