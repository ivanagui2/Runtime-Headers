/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteName : PBCodable <NSCopying> {
    struct { 
        unsigned int lastZilchStitchedIndex : 1; 
    }  _has;
    int  _lastZilchStitchedIndex;
    GEONameInfo * _nameInfo;
}

@property (nonatomic, readwrite) BOOL hasLastZilchStitchedIndex;
@property (nonatomic, readonly) BOOL hasNameInfo;
@property (nonatomic, readwrite) int lastZilchStitchedIndex;
@property (nonatomic, readwrite, retain) GEONameInfo *nameInfo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasLastZilchStitchedIndex;
- (BOOL)hasNameInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)lastZilchStitchedIndex;
- (void)mergeFrom:(id)arg1;
- (id)nameInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setHasLastZilchStitchedIndex:(BOOL)arg1;
- (void)setLastZilchStitchedIndex:(int)arg1;
- (void)setNameInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end