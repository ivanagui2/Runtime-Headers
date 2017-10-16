/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
 */

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler> {
    NSConditionLock * _lock;
    CNQueue * _queue;
    <CNScheduler> * _scheduler;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSConditionLock *lock;
@property (atomic, readonly) CNQueue *queue;
@property (atomic, readonly) <CNScheduler> *scheduler;
@property (atomic, readonly) Class superclass;

+ (id)resumedSchedulerWithScheduler:(id)arg1;
+ (id)suspendedSchedulerWithScheduler:(id)arg1;

- (void).cxx_destruct;
- (id)_nts_enqueueCancelableBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (void)_performFirstQueuedTask;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id)arg2 qualityOfService:(unsigned long long)arg3;
- (id)initWithScheduler:(id)arg1;
- (id)lock;
- (void)performBlock:(id)arg1;
- (void)performBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id)arg1;
- (id)performCancelableBlock:(id)arg1 qualityOfService:(unsigned long long)arg2;
- (id)queue;
- (void)resume;
- (id)scheduler;
- (void)suspend;
- (double)timestamp;

@end