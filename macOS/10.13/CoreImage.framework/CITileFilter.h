/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CITileFilter : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAngle;
@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_croppedCenterPixelImage;
- (id)_kernel;
- (id)_kernel_name;
- (id)_kernel_source;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputWidth;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end