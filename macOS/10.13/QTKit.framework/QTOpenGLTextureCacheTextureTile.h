/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTOpenGLTextureCacheTextureTile : QTOpenGLTextureTile {
    CIImage * _filterImage;
    NSDictionary * _filterImageOptions;
    struct __CVBuffer { } * _imageBuffer;
    int  _lockCount;
    int  _mutex;
    struct __CVBuffer { } * _texture;
    QTOpenGLTextureCache * _textureCache;
}

- (struct CGColorSpace { }*)_colorSpace;
- (id)_filterImageWithOptions:(id)arg1;
- (struct CGPoint { double x1; double x2; })contentPointForTextureCoordinate:(struct CGPoint { double x1; double x2; })arg1;
- (void)dealloc;
- (void)finalize;
- (id)initWithOpenGLTextureCache:(id)arg1 imageBuffer:(struct __CVBuffer { }*)arg2;
- (void)lock;
- (unsigned int)name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (unsigned int)target;
- (struct CGPoint { double x1; double x2; })textureCoordinateForContentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)unlock;

@end
