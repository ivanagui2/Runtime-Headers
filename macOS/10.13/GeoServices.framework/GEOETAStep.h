/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETAStep : PBCodable <NSCopying> {
    unsigned int  _distanceRemaining;
    unsigned int  _expectedTime;
    struct { 
        unsigned int distanceRemaining : 1; 
        unsigned int expectedTime : 1; 
        unsigned int stepID : 1; 
        unsigned int zilchPointIndex : 1; 
    }  _has;
    unsigned int  _stepID;
    GEOTimeCheckpoints * _timeCheckpoints;
    int  _zilchPointIndex;
}

@property (nonatomic, readwrite) unsigned int distanceRemaining;
@property (nonatomic, readwrite) unsigned int expectedTime;
@property (nonatomic, readwrite) BOOL hasDistanceRemaining;
@property (nonatomic, readwrite) BOOL hasExpectedTime;
@property (nonatomic, readwrite) BOOL hasStepID;
@property (nonatomic, readonly) BOOL hasTimeCheckpoints;
@property (nonatomic, readwrite) BOOL hasZilchPointIndex;
@property (nonatomic, readwrite) unsigned int stepID;
@property (nonatomic, readwrite, retain) GEOTimeCheckpoints *timeCheckpoints;
@property (nonatomic, readwrite) int zilchPointIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expectedTime;
- (BOOL)hasExpectedTime;
- (BOOL)hasStepID;
- (BOOL)hasTimeCheckpoints;
- (BOOL)hasZilchPointIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (void)setHasExpectedTime:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (void)setHasZilchPointIndex:(BOOL)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeCheckpoints:(id)arg1;
- (void)setZilchPointIndex:(int)arg1;
- (unsigned int)stepID;
- (id)timeCheckpoints;
- (void)writeTo:(id)arg1;
- (int)zilchPointIndex;

// GEOETAStep (GEOClientGeo3Extension)

- (unsigned int)distanceRemaining;
- (BOOL)hasDistanceRemaining;
- (void)setDistanceRemaining:(unsigned int)arg1;
- (void)setHasDistanceRemaining:(BOOL)arg1;

@end
