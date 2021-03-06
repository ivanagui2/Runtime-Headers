/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventCacheHit : PBCodable <NSCopying> {
    unsigned int  _cacheHitCount;
    unsigned int  _cacheMissCount;
    int  _cacheType;
    struct { 
        unsigned int cacheHitCount : 1; 
        unsigned int cacheMissCount : 1; 
        unsigned int cacheType : 1; 
    }  _has;
}

@property (nonatomic, readwrite) unsigned int cacheHitCount;
@property (nonatomic, readwrite) unsigned int cacheMissCount;
@property (nonatomic, readwrite) int cacheType;
@property (nonatomic, readwrite) BOOL hasCacheHitCount;
@property (nonatomic, readwrite) BOOL hasCacheMissCount;
@property (nonatomic, readwrite) BOOL hasCacheType;

- (int)StringAsCacheType:(id)arg1;
- (unsigned int)cacheHitCount;
- (unsigned int)cacheMissCount;
- (int)cacheType;
- (id)cacheTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCacheHitCount;
- (BOOL)hasCacheMissCount;
- (BOOL)hasCacheType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCacheHitCount:(unsigned int)arg1;
- (void)setCacheMissCount:(unsigned int)arg1;
- (void)setCacheType:(int)arg1;
- (void)setHasCacheHitCount:(BOOL)arg1;
- (void)setHasCacheMissCount:(BOOL)arg1;
- (void)setHasCacheType:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
