/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNFutureCompletionBlocks : NSObject {
    NSMutableArray * _completionBlocks;
    BOOL  _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)addCompletionBlock:(id)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(id)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(id)arg1 orCallWithFutureResult:(id)arg2;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (id)init;
- (void)setShouldCallImmediately:(BOOL)arg1;
- (BOOL)shouldCallImmediately;

@end