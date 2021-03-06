/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation
 */

@interface AVOperation : NSOperation {
    NSError * _error;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    long long  _status;
}

@property (atomic, readonly) NSError *error;
@property (atomic, readonly) long long status;

+ (void)initialize;

- (BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long*)arg3 failureReason:(id*)arg4;
- (void)dealloc;
- (void)didEnterTerminalState;
- (id)error;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;
- (void)finalize;
- (id)init;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isReady;
- (void)markAsCancelled;
- (void)markAsCompleted;
- (void)markAsFailedWithError:(id)arg1;
- (long long)status;

// AVOperation (ArrayOfOperations)

+ (long long)statusOfOperations:(id)arg1 error:(id*)arg2;

@end
