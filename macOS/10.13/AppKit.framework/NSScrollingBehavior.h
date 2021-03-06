/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSScrollingBehavior : NSObject

- (void)automateLiveScrollOfScrollView:(id)arg1;
- (long long)axisForSwipeTrackingGivenScrollWheelEvent:(id)arg1;
- (void)scrollView:(id)arg1 boundsChangedForClipView:(id)arg2;
- (void)scrollView:(id)arg1 endScrollGestureDueToReason:(id)arg2;
- (BOOL)scrollView:(id)arg1 panGestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (void)scrollView:(id)arg1 panGestureRecognizerFailed:(id)arg2;
- (void)scrollView:(id)arg1 panWithGestureRecognizer:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardMayBeginScrollEvent:(id)arg2;
- (id)scrollView:(id)arg1 responderToForwardScrollEvents:(id)arg2;
- (void)scrollView:(id)arg1 scrollWheelWithEvent:(id)arg2;
- (void)snapRubberBandOfScrollView:(id)arg1;
- (BOOL)supportsConcurrentScrolling;

@end
