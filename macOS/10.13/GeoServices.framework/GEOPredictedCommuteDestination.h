/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {
    BOOL  _chosen;
    double  _confidenceScore;
    int  _destinationType;
    struct { 
        unsigned int confidenceScore : 1; 
        unsigned int destinationType : 1; 
        unsigned int chosen : 1; 
    }  _has;
}

@property (nonatomic, readwrite) BOOL chosen;
@property (nonatomic, readwrite) double confidenceScore;
@property (nonatomic, readwrite) int destinationType;
@property (nonatomic, readwrite) BOOL hasChosen;
@property (nonatomic, readwrite) BOOL hasConfidenceScore;
@property (nonatomic, readwrite) BOOL hasDestinationType;

- (int)StringAsDestinationType:(id)arg1;
- (BOOL)chosen;
- (double)confidenceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)hasChosen;
- (BOOL)hasConfidenceScore;
- (BOOL)hasDestinationType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChosen:(BOOL)arg1;
- (void)setConfidenceScore:(double)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasChosen:(BOOL)arg1;
- (void)setHasConfidenceScore:(BOOL)arg1;
- (void)setHasDestinationType:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
