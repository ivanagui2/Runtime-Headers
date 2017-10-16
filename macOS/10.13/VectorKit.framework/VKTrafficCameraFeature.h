/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/Versions/A/VectorKit
 */

@interface VKTrafficCameraFeature : VKTrafficFeature {
    double  _approachingDistanceInMeters;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _approachingRouteOffset;
    unsigned int  _cameraPriority;
    int  _groupIdentifier;
    BOOL  _isAboveSpeedThreshold;
    bool  _shouldUpdateStyle;
    unsigned int  _speedLimit;
    NSString * _speedLimitText;
    unsigned int  _speedThreshold;
    long long  _state;
    long long  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) double approachingDistanceInMeters;
@property (nonatomic, readwrite) struct PolylineCoordinate { unsigned int x1; float x2; } approachingRouteOffset;
@property (nonatomic, readonly) unsigned int cameraPriority;
@property (nonatomic, readonly) int groupIdentifier;
@property (nonatomic, readwrite) BOOL isAboveSpeedThreshold;
@property (nonatomic, readonly) bool isGrouped;
@property (nonatomic, readwrite) long long labelState;
@property (nonatomic, readwrite) bool shouldUpdateStyle;
@property (nonatomic, readonly) NSString *speedLimitText;
@property (nonatomic, readonly) unsigned int speedThreshold;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (id).cxx_construct;
- (double)approachingDistanceInMeters;
- (struct PolylineCoordinate { unsigned int x1; float x2; })approachingRouteOffset;
- (unsigned int)cameraPriority;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)groupIdentifier;
- (id)initWithTrafficCamera:(id)arg1;
- (BOOL)isAboveSpeedThreshold;
- (BOOL)isAheadButNotApproaching;
- (BOOL)isApproaching;
- (BOOL)isBehind;
- (BOOL)isEqual:(id)arg1;
- (bool)isGrouped;
- (BOOL)isSpeedLimitCamera;
- (long long)labelState;
- (void)setApproachingRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setIsAboveSpeedThreshold:(BOOL)arg1;
- (void)setLabelState:(long long)arg1;
- (void)setShouldUpdateStyle:(bool)arg1;
- (bool)shouldUpdateStyle;
- (id)speedLimitText;
- (unsigned int)speedThreshold;
- (long long)type;
- (id)uniqueIdentifier;
- (void)updateLabelStateForRouteUserOffset:(const struct PolylineCoordinate { unsigned int x1; float x2; }*)arg1;

@end