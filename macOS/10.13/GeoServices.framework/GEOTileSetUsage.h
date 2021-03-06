/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTileSetUsage : PBCodable <NSCopying> {
    unsigned int  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int style : 1; 
    }  _has;
    int  _style;
}

@property (nonatomic, readwrite) unsigned int count;
@property (nonatomic, readwrite) BOOL hasCount;
@property (nonatomic, readwrite) BOOL hasStyle;
@property (nonatomic, readwrite) int style;

- (int)StringAsStyle:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCount;
- (BOOL)hasStyle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(BOOL)arg1;
- (void)setHasStyle:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
