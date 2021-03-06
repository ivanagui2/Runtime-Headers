/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/WebCore
 */

@interface WebVideoFullscreenInterfaceMacObjC : NSObject <PIPViewControllerDelegate, WebVideoViewContainerDelegate> {
    BOOL  _didRequestExitingPIP;
    BOOL  _exitingToStandardFullscreen;
    int  _pipState;
    struct RetainPtr<PIPViewController> { 
        void *m_ptr; 
    }  _pipViewController;
    BOOL  _playing;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _returningRect;
    struct RetainPtr<NSWindow> { 
        void *m_ptr; 
    }  _returningWindow;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoDimensions;
    struct RetainPtr<WebVideoViewContainer> { 
        void *m_ptr; 
    }  _videoViewContainer;
    struct RetainPtr<NSViewController> { 
        void *m_ptr; 
    }  _videoViewContainerController;
    struct WebVideoFullscreenInterfaceMac { int (**x1)(); int (**x2)(); unsigned int x3; struct Ref<WebCore::WebPlaybackSessionInterfaceMac> { struct WebPlaybackSessionInterfaceMac {} *x_4_1_1; } x4; struct WebVideoFullscreenModel {} *x5; struct WebVideoFullscreenChangeObserver {} *x6; unsigned int x7; struct RetainPtr<WebVideoFullscreenInterfaceMacObjC> { void *x_8_1_1; } x8; } * _webVideoFullscreenInterfaceMac;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL didRequestExitingPIP;
@property (getter=isExitingToStandardFullscreen, nonatomic, readwrite) BOOL exitingToStandardFullscreen;
@property (atomic, readonly) unsigned long long hash;
@property (getter=isPlaying, nonatomic, readwrite) BOOL playing;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readwrite) struct CGSize { double x1; double x2; } videoDimensions;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)boundsDidChangeForVideoViewContainer:(id)arg1;
- (BOOL)didRequestExitingPIP;
- (void)enterPIP;
- (void)exitPIP;
- (void)exitPIPAnimatingToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inWindow:(id)arg2;
- (id)initWithWebVideoFullscreenInterfaceMac:(struct WebVideoFullscreenInterfaceMac { int (**x1)(); int (**x2)(); unsigned int x3; struct Ref<WebCore::WebPlaybackSessionInterfaceMac> { struct WebPlaybackSessionInterfaceMac {} *x_4_1_1; } x4; struct WebVideoFullscreenModel {} *x5; struct WebVideoFullscreenChangeObserver {} *x6; unsigned int x7; struct RetainPtr<WebVideoFullscreenInterfaceMacObjC> { void *x_8_1_1; } x8; }*)arg1;
- (void)invalidate;
- (void)invalidateFullscreenState;
- (BOOL)isExitingToStandardFullscreen;
- (BOOL)isPlaying;
- (void)pipActionPause:(id)arg1;
- (void)pipActionPlay:(id)arg1;
- (void)pipActionStop:(id)arg1;
- (void)pipDidClose:(id)arg1;
- (BOOL)pipShouldClose:(id)arg1;
- (void)setExitingToStandardFullscreen:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setUpPIPForVideoView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inWindow:(id)arg3;
- (void)setVideoDimensions:(struct CGSize { double x1; double x2; })arg1;
- (void)superviewDidChangeForVideoViewContainer:(id)arg1;
- (void)updateIsPlaying:(BOOL)arg1 newPlaybackRate:(float)arg2;
- (struct CGSize { double x1; double x2; })videoDimensions;

@end
