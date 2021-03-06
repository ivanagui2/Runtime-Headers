/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {
    GEODirectionsResponse * _directionsResponse;
    GEOETAResponse * _etaResponse;
    struct { 
        unsigned int updatedTimeStamp : 1; 
    }  _has;
    double  _updatedTimeStamp;
}

@property (nonatomic, readwrite, retain) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readwrite, retain) GEOETAResponse *etaResponse;
@property (nonatomic, readonly) BOOL hasDirectionsResponse;
@property (nonatomic, readonly) BOOL hasEtaResponse;
@property (nonatomic, readwrite) BOOL hasUpdatedTimeStamp;
@property (nonatomic, readwrite) double updatedTimeStamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponse;
- (id)etaResponse;
- (BOOL)hasDirectionsResponse;
- (BOOL)hasEtaResponse;
- (BOOL)hasUpdatedTimeStamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setHasUpdatedTimeStamp:(BOOL)arg1;
- (void)setUpdatedTimeStamp:(double)arg1;
- (double)updatedTimeStamp;
- (void)writeTo:(id)arg1;

@end
