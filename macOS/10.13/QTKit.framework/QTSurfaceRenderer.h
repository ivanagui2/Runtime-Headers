/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTSurfaceRenderer : NSObject <QTImageConsumer> {
    struct QTSurfaceRendererConfigInternal { unsigned int x1; unsigned int x2; int x3; BOOL x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGColor {} *x8; BOOL x9; } * _activeConfig;
    int  _configCount;
    int  _flags;
    QTImageBufferQueue * _imageQueue;
    unsigned long long  _lastRenderTime;
    struct QTSurfaceRendererConfigInternal { unsigned int x1; unsigned int x2; int x3; BOOL x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGColor {} *x8; BOOL x9; } * _modelConfig;
    NSDictionary * _preferredAttributes;
    int  _preferredAttributesLock;
    <QTImageConsumerDelegateHelper> * _qtImageConsumerDelegate;
    int  _qtImageConsumerDelegateLock;
    QTSurfaceRendererIntermediateDelegateRenderer * _qtSurfaceRendererIntermediateDelegateRenderer;
    int  _queueLock;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _renderLock;
    NSMutableSet * _rootDescriptions;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _runloopCondition;
    unsigned long long  _scheduledDisplayCallbackTime;
    struct __CFRunLoop { } * _scheduledDisplayRunLoop;
    struct __CFRunLoopSource { } * _scheduledDisplaySource;
    unsigned long long  _scheduledDisplayTime;
    NSMutableSet * _tileDescriptions;
    NSMutableSet * _tiles;
    struct QTHostTimeQueue { } * _timeQueue;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (BOOL)_drawsWithFinalCutStudioCompatibleColors;
- (id)_imageConsumerDelegateHelper;
- (void)_setDrawsWithFinalCutStudioCompatibleColors:(BOOL)arg1;
- (void)_setImageConsumerDelegateHelper:(id)arg1;
- (void)applyConfiguration;
- (struct CGColor { }*)backgroundColor;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (unsigned int)connectionID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct __CVBuffer { }*)copyIntermediateImageForImage:(struct __CVBuffer { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)diagnosticString;
- (void)finalize;
- (void)flushImageBuffersAfterHostTime:(unsigned long long)arg1;
- (id)init;
- (void)invalidate;
- (BOOL)isVisible;
- (id)preferredAttributes;
- (id)rootTileDescriptionsForConfig:(struct QTSurfaceRendererConfigInternal { unsigned int x1; unsigned int x2; int x3; BOOL x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGColor {} *x8; BOOL x9; }*)arg1;
- (void)scheduledDisplay;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageBuffer:(struct __CVBuffer { }*)arg1 forHostTime:(unsigned long long)arg2;
- (void)setPreferredAttributes:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWindowCoverage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setWindowID:(unsigned int)arg1;
- (id)tileDescriptionsForRootTileDescriptions:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowCoverage;
- (unsigned int)windowID;

@end
