/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETAUpdater : NSObject {
    BOOL  _allowRequests;
    GEOApplicationAuditToken * _auditToken;
    GEOCommonOptions * _commonOptions;
    GEOETATrafficUpdateRequest * _currentETARequest;
    double  _debugTimeWindowDuration;
    <GEOETAUpdaterDelegate> * _delegate;
    GEOComposedWaypoint * _destination;
    NSData * _directionsResponseID;
    NSTimer * _etaIdleTimer;
    long long  _etaState;
    double  _lastETARequestTime;
    unsigned long long  _maxAlternateRoutesCount;
    double  _requestInterval;
    NSString * _requestingAppIdentifier;
    GEOComposedRoute * _route;
    GEORouteAttributes * _routeAttributes;
    GEORouteMatch * _routeMatch;
    BOOL  _shouldUpdateTrafficOnRoute;
    BOOL  _shouldUseConditionalRequest;
    GEOLocation * _userLocation;
}

@property (nonatomic, readwrite) BOOL allowRequests;
@property (nonatomic, readwrite, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readwrite) double debugTimeWindowDuration;
@property (nonatomic, readwrite) <GEOETAUpdaterDelegate> *delegate;
@property (nonatomic, readwrite, retain) GEOComposedWaypoint *destination;
@property (nonatomic, readwrite, retain) NSData *directionsResponseID;
@property (nonatomic, readwrite) unsigned long long maxAlternateRoutesCount;
@property (atomic, readonly) BOOL requestInProgress;
@property (nonatomic, readwrite) double requestInterval;
@property (nonatomic, readwrite, retain) NSString *requestingAppIdentifier;
@property (nonatomic, readwrite, retain) GEOComposedRoute *route;
@property (nonatomic, readwrite, retain) GEORouteAttributes *routeAttributes;
@property (nonatomic, readwrite, retain) GEORouteMatch *routeMatch;
@property (nonatomic, readwrite) BOOL shouldUpdateTrafficOnRoute;
@property (nonatomic, readwrite) BOOL shouldUseConditionalRequest;
@property (nonatomic, readwrite, retain) GEOLocation *userLocation;

- (void).cxx_destruct;
- (double)_calculateNextTransitionTime;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (void)_sendRequest:(id)arg1 shouldCallWillSendCallback:(BOOL)arg2;
- (BOOL)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (BOOL)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (void)_updateRequest:(id)arg1;
- (BOOL)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (BOOL)allowRequests;
- (id)auditToken;
- (void)cancelRequest;
- (id)currentStep;
- (void)dealloc;
- (double)debugTimeWindowDuration;
- (id)delegate;
- (id)destination;
- (id)directionsResponseID;
- (id)init;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (unsigned long long)maxAlternateRoutesCount;
- (double)percentageOfCurrentStepRemaining;
- (BOOL)requestInProgress;
- (double)requestInterval;
- (void)requestUpdate;
- (id)requestingAppIdentifier;
- (void)reset;
- (id)route;
- (id)routeAttributes;
- (id)routeMatch;
- (id)routesForETAUpdateRequest;
- (void)setAllowRequests:(BOOL)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setDebugTimeWindowDuration:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setMaxAlternateRoutesCount:(unsigned long long)arg1;
- (void)setRequestInterval:(double)arg1;
- (void)setRequestingAppIdentifier:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteAttributes:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShouldUpdateTrafficOnRoute:(BOOL)arg1;
- (void)setShouldUseConditionalRequest:(BOOL)arg1;
- (void)setUserLocation:(id)arg1;
- (BOOL)shouldUpdateTrafficOnRoute;
- (BOOL)shouldUseConditionalRequest;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;
- (BOOL)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (id)userLocation;

@end
