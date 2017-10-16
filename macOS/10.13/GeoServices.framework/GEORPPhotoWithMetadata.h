/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {
    double  _creationDate;
    NSData * _data;
    GEOLatLng * _geotagCoordinate;
    double  _geotagHorizontalAccuracy;
    double  _geotagTimestamp;
    struct { 
        unsigned int creationDate : 1; 
        unsigned int geotagHorizontalAccuracy : 1; 
        unsigned int geotagTimestamp : 1; 
    }  _has;
}

@property (nonatomic, readwrite) double creationDate;
@property (nonatomic, readwrite, retain) NSData *data;
@property (nonatomic, readwrite, retain) GEOLatLng *geotagCoordinate;
@property (nonatomic, readwrite) double geotagHorizontalAccuracy;
@property (nonatomic, readwrite) double geotagTimestamp;
@property (nonatomic, readwrite) BOOL hasCreationDate;
@property (nonatomic, readonly) BOOL hasData;
@property (nonatomic, readonly) BOOL hasGeotagCoordinate;
@property (nonatomic, readwrite) BOOL hasGeotagHorizontalAccuracy;
@property (nonatomic, readwrite) BOOL hasGeotagTimestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geotagCoordinate;
- (double)geotagHorizontalAccuracy;
- (double)geotagTimestamp;
- (BOOL)hasCreationDate;
- (BOOL)hasData;
- (BOOL)hasGeotagCoordinate;
- (BOOL)hasGeotagHorizontalAccuracy;
- (BOOL)hasGeotagTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setData:(id)arg1;
- (void)setGeotagCoordinate:(id)arg1;
- (void)setGeotagHorizontalAccuracy:(double)arg1;
- (void)setGeotagTimestamp:(double)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setHasGeotagHorizontalAccuracy:(BOOL)arg1;
- (void)setHasGeotagTimestamp:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end