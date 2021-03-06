/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNLocation : CLLocation {
    GEONavigationMatchInfo * _detailedMatchInfo;
    NSDate * _expirationDate;
    BOOL  _isDirectional;
    BOOL  _isLeeched;
    BOOL  _locationUnreliable;
    NSDate * _originalDate;
    int  _rampType;
    CLLocation * _rawLocation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _rawShiftedCoordinate;
    unsigned int  _roadLineType;
    GEORoadMatch * _roadMatch;
    NSString * _roadName;
    GEORouteMatch * _routeMatch;
    NSString * _shieldText;
    long long  _shieldType;
    unsigned long long  _speedLimit;
    BOOL  _speedLimitIsMPH;
    long long  _speedLimitShieldType;
    unsigned long long  _state;
}

@property (nonatomic, readonly) int _nav_source;
@property (nonatomic, readwrite, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, readwrite, retain) NSDate *expirationDate;
@property (nonatomic, readwrite) BOOL isDirectional;
@property (nonatomic, readwrite) BOOL isLeeched;
@property (nonatomic, readonly) BOOL isProjected;
@property (nonatomic, readwrite) BOOL locationUnreliable;
@property (nonatomic, readwrite, retain) NSDate *originalDate;
@property (nonatomic, readwrite) int rampType;
@property (nonatomic, readwrite, retain) CLLocation *rawLocation;
@property (nonatomic, readwrite) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic, readwrite) unsigned int roadLineType;
@property (nonatomic, readwrite, retain) GEORoadMatch *roadMatch;
@property (nonatomic, readwrite, retain) NSString *roadName;
@property (nonatomic, readwrite, retain) GEORouteMatch *routeMatch;
@property (nonatomic, readwrite, retain) NSString *shieldText;
@property (nonatomic, readwrite) long long shieldType;
@property (nonatomic, readwrite) unsigned long long speedLimit;
@property (nonatomic, readwrite) BOOL speedLimitIsMPH;
@property (nonatomic, readwrite) long long speedLimitShieldType;
@property (nonatomic, readwrite) unsigned long long state;
@property (nonatomic, readonly) unsigned long long stepIndex;

- (void).cxx_destruct;
- (id)_navigation_detailedMatchInfo;
- (BOOL)_navigation_hasValidCourse;
- (BOOL)_navigation_isStale;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (struct { struct { id x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; BOOL x13; unsigned char x14; BOOL x15; BOOL x16; unsigned char x17; BOOL x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; BOOL x21; unsigned int x22; }*)_roadFeature;
- (id)description;
- (id)detailedMatchInfo;
- (id)expirationDate;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1;
- (id)initWithLocationDetails:(id)arg1;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 useMatchLocation:(BOOL)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (BOOL)isDirectional;
- (BOOL)isLeeched;
- (BOOL)isProjected;
- (BOOL)locationUnreliable;
- (id)originalDate;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2;
- (int)rampType;
- (id)rawLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawShiftedCoordinate;
- (unsigned int)roadLineType;
- (id)roadMatch;
- (id)roadName;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsDirectional:(BOOL)arg1;
- (void)setIsLeeched:(BOOL)arg1;
- (void)setLocationUnreliable:(BOOL)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setRampType:(int)arg1;
- (void)setRawLocation:(id)arg1;
- (void)setRawShiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setRoadLineType:(unsigned int)arg1;
- (void)setRoadMatch:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (void)setSpeedLimit:(unsigned long long)arg1;
- (void)setSpeedLimitIsMPH:(BOOL)arg1;
- (void)setSpeedLimitShieldType:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)shieldText;
- (long long)shieldType;
- (unsigned long long)speedLimit;
- (BOOL)speedLimitIsMPH;
- (long long)speedLimitShieldType;
- (unsigned long long)state;
- (unsigned long long)stepIndex;

// MNLocation (MNLocationManagerExtras)

- (int)_nav_source;

// MNLocation (MNTraceRouteSimulator)

- (id)initWithGEOLocation:(id)arg1;

@end
