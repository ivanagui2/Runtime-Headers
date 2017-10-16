/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
 */

@interface QLSeamlessDocumentConcreteOpener : QLSeamlessDocumentOpener {
    long long  _animationBehavior;
    BOOL  _automaticallyAdjustWindowPosition;
    NSObject<OS_dispatch_source> * _deferredTimeoutTimer;
    NSDictionary * _displayState;
    QLSeamlessOpeningItemInfo * _info;
    double  _loadingProgress;
    int  _loadingState;
    int  _openingState;
    unsigned int  _port;
    int  _showingState;
}

- (BOOL)_beginShowingWindow:(id)arg1 effect:(id*)arg2;
- (void)_endShowingWindow:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 alreadyVisible:(BOOL)arg3 effect:(id)arg4;
- (void)_noteDocumentOpenedWithWindow:(id)arg1;
- (void)_startDeferredTimeout;
- (void)_stopDeferredTimeout;
- (BOOL)automaticallyAdjustWindowPosition;
- (void)beginDocumentLoading;
- (void)beginDocumentOpening;
- (void)dealloc;
- (void)deferDocumentLoading;
- (void)deferDocumentShowing;
- (id)description;
- (void)discard;
- (id)displayState;
- (void)endDocumentLoading;
- (void)endDocumentOpening;
- (id)initWithURL:(id)arg1;
- (BOOL)isAnimating;
- (BOOL)isOpening;
- (double)loadingProgress;
- (void)setAutomaticallyAdjustWindowPosition:(BOOL)arg1;
- (void)setLoadingProgress:(double)arg1;
- (void)showLoadingWindow;
- (void)showWindow:(id)arg1 contentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withBlock:(id)arg3;
- (id)transitionImage;

@end