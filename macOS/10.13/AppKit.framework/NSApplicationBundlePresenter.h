/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSApplicationBundlePresenter : NSObject <NSFilePresenter>

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (atomic, readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (atomic, readonly, copy) NSURL *presentedItemURL;
@property (atomic, readonly, copy) NSURL *primaryPresentedItemURL;
@property (atomic, readonly) Class superclass;

- (id)presentedItemOperationQueue;
- (id)presentedItemURL;
- (void)relinquishPresentedItemToWriter:(id)arg1;

@end
