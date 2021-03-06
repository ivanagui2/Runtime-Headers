/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    NSMutableArray * _telemetricEntitys;
}

@property (nonatomic, readwrite, retain) NSMutableArray *telemetricEntitys;

+ (Class)telemetricEntityType;

- (void).cxx_destruct;
- (void)addTelemetricEntity:(id)arg1;
- (void)clearTelemetricEntitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTelemetricEntitys:(id)arg1;
- (id)telemetricEntityAtIndex:(unsigned long long)arg1;
- (id)telemetricEntitys;
- (unsigned long long)telemetricEntitysCount;
- (void)writeTo:(id)arg1;

@end
