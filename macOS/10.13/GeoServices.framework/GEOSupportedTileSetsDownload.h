/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying> {
    GEODownloadMetadata * _metadata;
    GEOSupportedTileSets * _tileSets;
}

@property (nonatomic, readwrite, retain) GEODownloadMetadata *metadata;
@property (nonatomic, readwrite, retain) GEOSupportedTileSets *tileSets;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (BOOL)readFrom:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTileSets:(id)arg1;
- (id)tileSets;
- (void)writeTo:(id)arg1;

@end