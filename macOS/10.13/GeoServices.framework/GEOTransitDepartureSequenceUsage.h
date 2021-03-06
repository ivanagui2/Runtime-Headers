/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {
    NSString * _direction;
    struct { 
        unsigned int lineId : 1; 
    }  _has;
    NSString * _headsign;
    unsigned long long  _lineId;
}

@property (nonatomic, readwrite, retain) NSString *direction;
@property (nonatomic, readonly) BOOL hasDirection;
@property (nonatomic, readonly) BOOL hasHeadsign;
@property (nonatomic, readwrite) BOOL hasLineId;
@property (nonatomic, readwrite, retain) NSString *headsign;
@property (nonatomic, readwrite) unsigned long long lineId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)direction;
- (BOOL)hasDirection;
- (BOOL)hasHeadsign;
- (BOOL)hasLineId;
- (unsigned long long)hash;
- (id)headsign;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)lineId;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDirection:(id)arg1;
- (void)setHasLineId:(BOOL)arg1;
- (void)setHeadsign:(id)arg1;
- (void)setLineId:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
