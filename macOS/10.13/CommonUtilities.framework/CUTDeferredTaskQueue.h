/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/Versions/A/CommonUtilities
 */

@interface CUTDeferredTaskQueue : NSObject {
    NSNumber * _capacity;
    id  _originalBlock;
    NSMutableArray * _pendingDispatchBlocks;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSNumber *capacity;
@property (nonatomic, readonly) id originalBlock;
@property (nonatomic, readonly) NSMutableArray *pendingDispatchBlocks;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)cancelPendingExecutions;
- (id)capacity;
- (void)enqueueExecutionWithTarget:(id)arg1 afterDelay:(double)arg2;
- (id)initWithCapacity:(long long)arg1 queue:(id)arg2 block:(id)arg3;
- (id)initWithNumberCapacity:(id)arg1 queue:(id)arg2 block:(id)arg3;
- (id)initWithQueue:(id)arg1 block:(id)arg2;
- (id)originalBlock;
- (id)pendingDispatchBlocks;
- (id)queue;

@end