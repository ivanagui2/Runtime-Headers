/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSViewControllerPresentationAnimatorObject : NSObject <NSViewControllerPresentationAnimator> {
    id  _completionHandler;
    NSViewController * _fromViewController;
    NSViewController * _toViewController;
}

@property (atomic, readwrite, copy) id completionHandler;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readwrite, retain) NSViewController *fromViewController;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;
@property (atomic, readwrite, retain) NSViewController *toViewController;

- (void)animateDismissalOfViewController:(id)arg1 fromViewController:(id)arg2;
- (void)animatePresentationOfViewController:(id)arg1 fromViewController:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (id)fromViewController;
- (void)setCompletionHandler:(id)arg1;
- (void)setFromViewController:(id)arg1;
- (void)setToViewController:(id)arg1;
- (id)toViewController;

@end
