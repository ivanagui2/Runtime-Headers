/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEvent : PBCodable <NSCopying> {
    GEOLogMsgEventBatchTrafficProbe * _batchTrafficProbeCollection;
    GEOLogMsgEventCacheHit * _cacheHitEvent;
    GEOLogMsgEventClientACSuggestions * _clientAcSuggestions;
    GEOLogMsgEventCommuteWindow * _commuteWindow;
    GEOLogMsgEventDirections * _directionsEvent;
    int  _eventType;
    GEOLogMsgEventFullNavTrace * _fullNavTrace;
    GEOLogMsgEventGenericAppError * _genericAppErrorEvent;
    struct { 
        unsigned int usageEventTime : 1; 
        unsigned int eventType : 1; 
    }  _has;
    GEOLogMsgEventListInteractionSession * _listInteractionSession;
    GEOLogMsgEventLogFramework * _logFrameworkEvent;
    NSMutableArray * _logMsgStates;
    GEOLogMsgEventMapLaunch * _mapLaunchEvent;
    GEOLogMsgEventMapsWidgetsInteractionSession * _mapsWidgetsInteractionSession;
    GEOLogMsgEventNetwork * _networkEvent;
    GEOLogMsgEventPlaceDataCache * _placeDataCacheEvent;
    GEOLogMsgEventProactiveSuggestionInteractionSession * _proactiveSuggestionInteractionSessionEvent;
    GEOLogMsgEventRealtimeTrafficProbe * _realtimeTrafficProbeCollection;
    GEOLogMsgEventRefineSearchSession * _refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession * _rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession * _rideBookingSession;
    GEOLogMsgEventStaleResource * _staleResourceEvent;
    GEOLogMsgEventStateTiming * _stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession * _tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession * _tableBookingSession;
    GEOLogMsgEventTelemetric * _telemetric;
    GEOLogMsgEventTileSetState * _tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis * _timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime * _timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch * _transitAppLaunchEvent;
    double  _usageEventTime;
    GEOLogMsgEventUserAction * _userActionEvent;
}

@property (nonatomic, readwrite, retain) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection;
@property (nonatomic, readwrite, retain) GEOLogMsgEventCacheHit *cacheHitEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventClientACSuggestions *clientAcSuggestions;
@property (nonatomic, readwrite, retain) GEOLogMsgEventCommuteWindow *commuteWindow;
@property (nonatomic, readwrite, retain) GEOLogMsgEventDirections *directionsEvent;
@property (nonatomic, readwrite) int eventType;
@property (nonatomic, readwrite, retain) GEOLogMsgEventFullNavTrace *fullNavTrace;
@property (nonatomic, readwrite, retain) GEOLogMsgEventGenericAppError *genericAppErrorEvent;
@property (nonatomic, readonly) BOOL hasBatchTrafficProbeCollection;
@property (nonatomic, readonly) BOOL hasCacheHitEvent;
@property (nonatomic, readonly) BOOL hasClientAcSuggestions;
@property (nonatomic, readonly) BOOL hasCommuteWindow;
@property (nonatomic, readonly) BOOL hasDirectionsEvent;
@property (nonatomic, readwrite) BOOL hasEventType;
@property (nonatomic, readonly) BOOL hasFullNavTrace;
@property (nonatomic, readonly) BOOL hasGenericAppErrorEvent;
@property (nonatomic, readonly) BOOL hasListInteractionSession;
@property (nonatomic, readonly) BOOL hasLogFrameworkEvent;
@property (nonatomic, readonly) BOOL hasMapLaunchEvent;
@property (nonatomic, readonly) BOOL hasMapsWidgetsInteractionSession;
@property (nonatomic, readonly) BOOL hasNetworkEvent;
@property (nonatomic, readonly) BOOL hasPlaceDataCacheEvent;
@property (nonatomic, readonly) BOOL hasProactiveSuggestionInteractionSessionEvent;
@property (nonatomic, readonly) BOOL hasRealtimeTrafficProbeCollection;
@property (nonatomic, readonly) BOOL hasRefineSearchSession;
@property (nonatomic, readonly) BOOL hasRideBookedSession;
@property (nonatomic, readonly) BOOL hasRideBookingSession;
@property (nonatomic, readonly) BOOL hasStaleResourceEvent;
@property (nonatomic, readonly) BOOL hasStateTimingEvent;
@property (nonatomic, readonly) BOOL hasTableBookedSession;
@property (nonatomic, readonly) BOOL hasTableBookingSession;
@property (nonatomic, readonly) BOOL hasTelemetric;
@property (nonatomic, readonly) BOOL hasTileSetStateEvent;
@property (nonatomic, readonly) BOOL hasTimeToLeaveHypothesisEvent;
@property (nonatomic, readonly) BOOL hasTimeToLeaveInitialTravelTimeEvent;
@property (nonatomic, readonly) BOOL hasTransitAppLaunchEvent;
@property (nonatomic, readwrite) BOOL hasUsageEventTime;
@property (nonatomic, readonly) BOOL hasUserActionEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property (nonatomic, readwrite, retain) GEOLogMsgEventLogFramework *logFrameworkEvent;
@property (nonatomic, readwrite, retain) NSMutableArray *logMsgStates;
@property (nonatomic, readwrite, retain) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property (nonatomic, readwrite, retain) GEOLogMsgEventNetwork *networkEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection;
@property (nonatomic, readwrite, retain) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property (nonatomic, readwrite, retain) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession;
@property (nonatomic, readwrite, retain) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession;
@property (nonatomic, readwrite, retain) GEOLogMsgEventStaleResource *staleResourceEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventStateTiming *stateTimingEvent;
@property (nonatomic, readwrite, retain) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession;
@property (nonatomic, readwrite, retain) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession;
@property (nonatomic, readwrite, retain) GEOLogMsgEventTelemetric *telemetric;
@property (nonatomic, readwrite, retain) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property (nonatomic, readwrite, retain) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property (nonatomic, readwrite) double usageEventTime;
@property (nonatomic, readwrite, retain) GEOLogMsgEventUserAction *userActionEvent;

+ (Class)logMsgStateType;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)addLogMsgState:(id)arg1;
- (id)batchTrafficProbeCollection;
- (id)cacheHitEvent;
- (void)clearLogMsgStates;
- (id)clientAcSuggestions;
- (id)commuteWindow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsEvent;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (id)fullNavTrace;
- (id)genericAppErrorEvent;
- (BOOL)hasBatchTrafficProbeCollection;
- (BOOL)hasCacheHitEvent;
- (BOOL)hasClientAcSuggestions;
- (BOOL)hasCommuteWindow;
- (BOOL)hasDirectionsEvent;
- (BOOL)hasEventType;
- (BOOL)hasFullNavTrace;
- (BOOL)hasGenericAppErrorEvent;
- (BOOL)hasListInteractionSession;
- (BOOL)hasLogFrameworkEvent;
- (BOOL)hasMapLaunchEvent;
- (BOOL)hasMapsWidgetsInteractionSession;
- (BOOL)hasNetworkEvent;
- (BOOL)hasPlaceDataCacheEvent;
- (BOOL)hasProactiveSuggestionInteractionSessionEvent;
- (BOOL)hasRealtimeTrafficProbeCollection;
- (BOOL)hasRefineSearchSession;
- (BOOL)hasRideBookedSession;
- (BOOL)hasRideBookingSession;
- (BOOL)hasStaleResourceEvent;
- (BOOL)hasStateTimingEvent;
- (BOOL)hasTableBookedSession;
- (BOOL)hasTableBookingSession;
- (BOOL)hasTelemetric;
- (BOOL)hasTileSetStateEvent;
- (BOOL)hasTimeToLeaveHypothesisEvent;
- (BOOL)hasTimeToLeaveInitialTravelTimeEvent;
- (BOOL)hasTransitAppLaunchEvent;
- (BOOL)hasUserActionEvent;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)listInteractionSession;
- (id)logFrameworkEvent;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;
- (id)logMsgStates;
- (unsigned long long)logMsgStatesCount;
- (id)mapLaunchEvent;
- (id)mapsWidgetsInteractionSession;
- (void)mergeFrom:(id)arg1;
- (id)networkEvent;
- (id)placeDataCacheEvent;
- (id)proactiveSuggestionInteractionSessionEvent;
- (BOOL)readFrom:(id)arg1;
- (id)realtimeTrafficProbeCollection;
- (id)refineSearchSession;
- (id)rideBookedSession;
- (id)rideBookingSession;
- (void)setBatchTrafficProbeCollection:(id)arg1;
- (void)setCacheHitEvent:(id)arg1;
- (void)setClientAcSuggestions:(id)arg1;
- (void)setCommuteWindow:(id)arg1;
- (void)setDirectionsEvent:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setFullNavTrace:(id)arg1;
- (void)setGenericAppErrorEvent:(id)arg1;
- (void)setHasEventType:(BOOL)arg1;
- (void)setListInteractionSession:(id)arg1;
- (void)setLogFrameworkEvent:(id)arg1;
- (void)setLogMsgStates:(id)arg1;
- (void)setMapLaunchEvent:(id)arg1;
- (void)setMapsWidgetsInteractionSession:(id)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setPlaceDataCacheEvent:(id)arg1;
- (void)setProactiveSuggestionInteractionSessionEvent:(id)arg1;
- (void)setRealtimeTrafficProbeCollection:(id)arg1;
- (void)setRefineSearchSession:(id)arg1;
- (void)setRideBookedSession:(id)arg1;
- (void)setRideBookingSession:(id)arg1;
- (void)setStaleResourceEvent:(id)arg1;
- (void)setStateTimingEvent:(id)arg1;
- (void)setTableBookedSession:(id)arg1;
- (void)setTableBookingSession:(id)arg1;
- (void)setTelemetric:(id)arg1;
- (void)setTileSetStateEvent:(id)arg1;
- (void)setTimeToLeaveHypothesisEvent:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeEvent:(id)arg1;
- (void)setTransitAppLaunchEvent:(id)arg1;
- (void)setUserActionEvent:(id)arg1;
- (id)staleResourceEvent;
- (id)stateTimingEvent;
- (id)tableBookedSession;
- (id)tableBookingSession;
- (id)telemetric;
- (id)tileSetStateEvent;
- (id)timeToLeaveHypothesisEvent;
- (id)timeToLeaveInitialTravelTimeEvent;
- (id)transitAppLaunchEvent;
- (id)userActionEvent;
- (void)writeTo:(id)arg1;

// GEOLogMsgEvent (Extras)

+ (void)_initializeAcceptedLogMsgStateTypes;
+ (id)acceptedLogMsgStates;
+ (id)acceptedLogMsgStatesForLogMsgEventType:(int)arg1;
+ (BOOL)logMsgEventType:(int)arg1 acceptsLogMsgStateType:(int)arg2;

- (BOOL)acceptsLogMsgStateType:(int)arg1;
- (id)logMsgStateOfType:(int)arg1;
- (id)logMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1;
- (unsigned long long)numberOfLogMsgStatesOfType:(int)arg1 stateOrigin:(id)arg2;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)unregisterLogMsgStatesOfTypes:(id)arg1;

// GEOLogMsgEvent (GEOClientLogMsgEventExtension)

- (BOOL)hasUsageEventTime;
- (void)setHasUsageEventTime:(BOOL)arg1;
- (void)setUsageEventTime:(double)arg1;
- (double)usageEventTime;

@end
