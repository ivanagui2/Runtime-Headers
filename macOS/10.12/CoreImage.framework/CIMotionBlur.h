/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/Versions/A/CoreImage
 */

@interface CIMotionBlur : CILinearBlur {
    NSNumber * inputAngle;
}

@property (nonatomic, readwrite, retain) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (id)_kernel;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;

@end
