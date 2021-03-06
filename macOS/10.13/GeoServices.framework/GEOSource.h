/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOSource : PBCodable <NSCopying> {
    NSString * _sourceId;
    NSString * _sourceName;
    NSString * _sourceVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasSourceVersion;
@property (nonatomic, readwrite, retain) NSString *sourceId;
@property (nonatomic, readwrite, retain) NSString *sourceName;
@property (nonatomic, readwrite, retain) NSString *sourceVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSourceVersion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (id)sourceId;
- (id)sourceName;
- (id)sourceVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOSource (GEOMapItemAssistantLegacy)

- (id)initWithAttributionID:(id)arg1;

@end
