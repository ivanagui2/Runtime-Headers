/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSFullScreenCreateTileDropTargetController : NSObject {
    BOOL  _animatingDismiss;
    BOOL  _animatingReveal;
    BOOL  _canJoinSpace;
    NSTimer * _delayStartWindowCanJoinTimer;
    BOOL  _hasQueriedCanDragForCurrentDrag;
    BOOL  _isRegisteredForNotifications;
    BOOL  _isWindowDragging;
    _NSFullScreenCreateTileDropTargetWindow * _leftDropTargetWindow;
    BOOL  _requestedJoinSpace;
    _NSFullScreenCreateTileDropTargetWindow * _rightDropTargetWindow;
    _NSFullScreenSpace * _space;
    NSWindow * _trackedWindow;
    BOOL  _waitingForDockQueryResponse;
}

@property (nonatomic, readwrite) _NSFullScreenSpace *space;

- (void)_dismissDropTargets;
- (void)_dismissLeftDropTarget;
- (void)_dismissRightDropTarget;
- (BOOL)_handleWindowDropIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftCollapsedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftDropRect;
- (void)_performDropIntoPosition:(unsigned long long)arg1;
- (void)_registerForNotifications:(BOOL)arg1;
- (void)_revealLeftDropTarget;
- (void)_revealRightDropTarget;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightCollapsedRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightDropRect;
- (void)_startTrackingWindowDrag:(id)arg1;
- (void)_stopTrackingWindowDrag;
- (BOOL)acceptDropForTearOffTabWindow:(id)arg1;
- (id)backgroundWindowIDs;
- (void)dealloc;
- (void)displayChanged;
- (BOOL)dragWouldPerformDrop;
- (id)init;
- (void)resetState;
- (void)reshapeContents;
- (void)setSpace:(id)arg1;
- (id)space;
- (void)updateWindowDuringDragNotification:(id)arg1;
- (void)windowDidEndDraggingNotification:(id)arg1;
- (void)windowWillStartDraggingNotification:(id)arg1;

@end