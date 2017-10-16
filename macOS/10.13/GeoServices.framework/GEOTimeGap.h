/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTimeGap : PBCodable <NSCopying> {
    struct { 
        unsigned int seconds : 1; 
        unsigned int subsequentEventId : 1; 
        unsigned int ifChained : 1; 
    }  _has;
    BOOL  _ifChained;
    unsigned int  _seconds;
    unsigned int  _subsequentEventId;
}

@property (nonatomic, readwrite) BOOL hasIfChained;
@property (nonatomic, readwrite) BOOL hasSeconds;
@property (nonatomic, readwrite) BOOL hasSubsequentEventId;
@property (nonatomic, readwrite) BOOL ifChained;
@property (nonatomic, readwrite) unsigned int seconds;
@property (nonatomic, readwrite) unsigned int subsequentEventId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIfChained;
- (BOOL)hasSeconds;
- (BOOL)hasSubsequentEventId;
- (unsigned long long)hash;
- (BOOL)ifChained;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)seconds;
- (void)setHasIfChained:(BOOL)arg1;
- (void)setHasSeconds:(BOOL)arg1;
- (void)setHasSubsequentEventId:(BOOL)arg1;
- (void)setIfChained:(BOOL)arg1;
- (void)setSeconds:(unsigned int)arg1;
- (void)setSubsequentEventId:(unsigned int)arg1;
- (unsigned int)subsequentEventId;
- (void)writeTo:(id)arg1;

@end