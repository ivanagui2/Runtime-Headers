/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOActiveTileGroupReserved : PBCodable <NSCopying> {
    NSString * _authToken;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSString *authToken;
@property (nonatomic, readonly) BOOL hasAuthToken;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)authToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAuthToken;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
