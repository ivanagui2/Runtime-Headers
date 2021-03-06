/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlacecardModule : PBCodable <NSCopying> {
    struct { 
        unsigned int offset : 1; 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _margins;
    unsigned int  _offset;
    int  _type;
}

@property (nonatomic, readwrite) BOOL hasOffset;
@property (nonatomic, readwrite) BOOL hasType;
@property (nonatomic, readwrite, retain) NSMutableArray *margins;
@property (nonatomic, readwrite) unsigned int offset;
@property (nonatomic, readwrite) int type;

+ (Class)marginsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addMargins:(id)arg1;
- (void)clearMargins;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOffset;
- (BOOL)hasType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)margins;
- (id)marginsAtIndex:(unsigned long long)arg1;
- (unsigned long long)marginsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (BOOL)readFrom:(id)arg1;
- (void)setHasOffset:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setMargins:(id)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
