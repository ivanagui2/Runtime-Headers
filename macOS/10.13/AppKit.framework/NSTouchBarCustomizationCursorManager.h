/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSTouchBarCustomizationCursorManager : NSObject {
    BOOL  _cursorIsInTouchBar;
    <NSTouchBarCustomizationCursorManagerDelegate> * _delegate;
    int  _displayID;
    id  _eventTracker;
    double  _lastMouseUpTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchBarCursorPosition;
    long long  _trackCount;
}

@property (atomic, readonly) BOOL cursorIsInTouchBar;
@property (atomic, readwrite) <NSTouchBarCustomizationCursorManagerDelegate> *delegate;

+ (void)_hideCursor;
+ (void)_showCursor;

- (void).cxx_destruct;
- (void)_enterTouchBarWithDisplayLocation:(struct CGPoint { double x1; double x2; })arg1 mouseIsDown:(BOOL)arg2;
- (void)_exitTouchBarWithDFRLocation:(struct CGPoint { double x1; double x2; })arg1 cancelled:(BOOL)arg2;
- (void)beginTrackingCursor;
- (BOOL)cursorIsInTouchBar;
- (void)dealloc;
- (id)delegate;
- (id)initWithAssociatedDisplay:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopTrackingCursor;
- (BOOL)updateWithEvent:(id)arg1;

@end
