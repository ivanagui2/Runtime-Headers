/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/Versions/A/PerformanceAnalysis
 */

@interface PAPerfLoggingIntervalTransitionEvent : NSObject {
    NSDictionary * _context;
    NSString * _startTransitionCauseIntervalType;
    double  _transitionTimeInSec;
    int  _transitionType;
}

@property (atomic, readonly) NSDictionary *context;
@property (atomic, readonly) double transitionTimeInSec;
@property (atomic, readonly) int transitionType;
@property (atomic, readonly) NSString *transitionTypeString;
@property (atomic, readonly) NSString *transitioningIntervalType;

+ (id)stringForTransitionTimeline:(id)arg1 withStartTimeInSec:(double)arg2 andEndTimeInSec:(double)arg3;

- (id)_stringForTransitionWithOperationStartTimeInSec:(double)arg1 andPreviousEventTimeInSec:(double)arg2;
- (long long)compare:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)initWithTransitionType:(int)arg1 ofIntervalType:(id)arg2 atTimestamp:(double)arg3 withContext:(id)arg4;
- (double)transitionTimeInSec;
- (int)transitionType;
- (id)transitionTypeString;
- (id)transitioningIntervalType;

@end
