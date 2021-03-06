/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTracePlayer : NSObject <MNTimeProvider, MNTracePlayerSchedulerDelegate> {
    MNTracePlayerTimelineStream * _directionsStream;
    double  _duration;
    MNTracePlayerETAUpdater * _etaUpdater;
    MNTracePlayerTimelineStream * _etaUpdatesStream;
    BOOL  _forceDirectionsResponsesFromTrace;
    BOOL  _isPaused;
    BOOL  _isPlaying;
    MNLocation * _lastReportedLocation;
    MNTracePlayerTimelineStream * _locationStream;
    int  _mainTransportType;
    NSHashTable * _observers;
    MNTracePlayerScheduler * _scheduler;
    BOOL  _shouldPlayETARequests;
    double  _speedMultiplier;
    MNTrace * _trace;
    double  _traceStartTimestamp;
}

@property (nonatomic, readonly) NSDate *currentLocationDate;
@property (nonatomic, readonly) double currentTime;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) GEOETAUpdater *etaUpdater;
@property (nonatomic, readwrite) BOOL forceDirectionsResponsesFromTrace;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL isPaused;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, readonly) int mainTransportType;
@property (nonatomic, readonly) double position;
@property (nonatomic, readonly) NSData *selectedRouteID;
@property (nonatomic, readonly) unsigned long long selectedRouteIndex;
@property (nonatomic, readwrite) BOOL shouldPlayETARequests;
@property (nonatomic, readwrite) double speedMultiplier;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) MNTrace *trace;

- (void).cxx_destruct;
- (void)_createTimelineStreams;
- (id)_locationWithCurrentDate:(id)arg1;
- (double)_responseTimeForRequestAtIndex:(unsigned long long)arg1;
- (void)addObserver:(id)arg1;
- (id)currentLocationDate;
- (double)currentTime;
- (void)dealloc;
- (double)duration;
- (id)etaUpdater;
- (BOOL)forceDirectionsResponsesFromTrace;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 outError:(id*)arg2;
- (id)initWithTrace:(id)arg1;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)jumpToBookmarkAtIndex:(unsigned long long)arg1;
- (void)jumpToLocationAtIndex:(unsigned long long)arg1;
- (void)jumpToTime:(double)arg1;
- (int)mainTransportType;
- (void)pause;
- (double)position;
- (void)removeObserver:(id)arg1;
- (BOOL)requestDirectionsNearTimestamp:(double)arg1 withHandler:(id)arg2 errorHandler:(id)arg3;
- (BOOL)requestDirectionsWithHandler:(id)arg1 errorHandler:(id)arg2;
- (void)resume;
- (id)selectedRouteID;
- (unsigned long long)selectedRouteIndex;
- (void)setForceDirectionsResponsesFromTrace:(BOOL)arg1;
- (void)setShouldPlayETARequests:(BOOL)arg1;
- (void)setSpeedMultiplier:(double)arg1;
- (BOOL)shouldPlayETARequests;
- (void)skipByTimeInterval:(double)arg1;
- (double)speedMultiplier;
- (void)start;
- (void)startAtLocationIndex:(unsigned long long)arg1;
- (void)stop;
- (id)trace;
- (void)tracePlayerScheduler:(id)arg1 didUpdatePosition:(double)arg2;

@end
