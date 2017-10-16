/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
 */

@interface CARenderer : NSObject {
    struct CARendererPriv { id x1; /* Warning: Unrecognized filer type: 'W' using 'void*' */ void*x2; void*x3; void*x4; void*x5; void*x6; int x7; double x8; void*x9; void*x10; id x11; struct _CGLContextObject {} *x12; struct _CGLPixelFormatObject {} *x13; int x14; struct Context {} *x15; struct Renderer {} *x16; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_17_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_17_1_2; } x17; struct CGColorSpace {} *x18; struct Update {} *x19; unsigned int x20; unsigned int x21[2]; unsigned int x22[2]; unsigned int x23; unsigned int x24 : 8; unsigned long long x25; BOOL x26[0]; } * _priv;
}

@property (atomic, readwrite) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (atomic, readwrite, retain) CAContext *context;
@property (atomic, readwrite) <CARendererDelegate> *delegate;
@property (atomic, readwrite, retain) CALayer *layer;

+ (id)rendererWithCGLContext:(void*)arg1 options:(id)arg2;
+ (id)rendererWithMTLTexture:(id)arg1 options:(id)arg2;

- (id)_initWithCGLContext:(void*)arg1 options:(id)arg2;
- (id)_initWithMTLTexture:(id)arg1 options:(id)arg2;
- (id)_initWithOptions:(id)arg1;
- (void)addUpdateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginFrameAtTime:(double)arg1 timeStamp:(struct { unsigned int x1; int x2; long long x3; unsigned long long x4; double x5; long long x6; struct CVSMPTETime { short x_7_1_1; short x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; short x_7_1_6; short x_7_1_7; short x_7_1_8; short x_7_1_9; } x7; unsigned long long x8; unsigned long long x9; }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)endFrame;
- (BOOL)hasMissingContent;
- (id)layer;
- (double)nextFrameTime;
- (void)render;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })updateBounds;

// CARenderer (CARendererPrivate)

- (id)context;
- (id)delegate;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;

@end