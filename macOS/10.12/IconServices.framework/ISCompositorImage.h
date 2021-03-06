/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
 */

@interface ISCompositorImage : NSObject {
    struct CGImage { } * _image;
    struct { 
        double begin; 
        double end; 
    }  _sizeRange;
}

@property (atomic, readonly) struct CGImage { }*CGImage;
@property (atomic, readonly) struct { double x1; double x2; } sizeRange;

- (struct CGImage { }*)CGImage;
- (void)dealloc;
- (id)initWithImage:(struct CGImage { }*)arg1 sizeRange:(struct { double x1; double x2; })arg2;
- (struct { double x1; double x2; })sizeRange;

@end
