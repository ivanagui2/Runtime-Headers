/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIGlassDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputScale;
    CIImage * inputTexture;
}

@property (nonatomic, readwrite, retain) CIVector *inputCenter;
@property (nonatomic, readwrite, retain) CIImage *inputImage;
@property (nonatomic, readwrite, retain) NSNumber *inputScale;
@property (nonatomic, readwrite, retain) CIImage *inputTexture;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputScale;
- (id)inputTexture;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTexture:(id)arg1;

@end