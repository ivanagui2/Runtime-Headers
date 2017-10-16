/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSData * _addressObjectHint;
    NSString * _externalItemId;
    NSMutableArray * _formattedAddressLineHints;
    struct { 
        unsigned int muid : 1; 
        unsigned int addressGeocodeAccuracyHint : 1; 
        unsigned int placeTypeHint : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    GEOLatLng * _locationHint;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    int  _resultProviderId;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic, readwrite) int addressGeocodeAccuracyHint;
@property (nonatomic, readwrite, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, readwrite, retain) NSData *addressObjectHint;
@property (nonatomic, readwrite, retain) NSString *externalItemId;
@property (nonatomic, readwrite, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic, readwrite) BOOL hasAddressGeocodeAccuracyHint;
@property (nonatomic, readonly) BOOL hasAddressHint;
@property (nonatomic, readonly) BOOL hasAddressObjectHint;
@property (nonatomic, readonly) BOOL hasExternalItemId;
@property (nonatomic, readonly) BOOL hasLocationHint;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasPlaceNameHint;
@property (nonatomic, readwrite) BOOL hasPlaceTypeHint;
@property (nonatomic, readwrite) BOOL hasResultProviderId;
@property (nonatomic, readonly) BOOL hasVendorId;
@property (nonatomic, readwrite, retain) GEOLatLng *locationHint;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readwrite, retain) NSString *placeNameHint;
@property (nonatomic, readwrite) int placeTypeHint;
@property (nonatomic, readwrite) int resultProviderId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) NSString *vendorId;

+ (Class)formattedAddressLineHintType;

- (void).cxx_destruct;
- (int)StringAsAddressGeocodeAccuracyHint:(id)arg1;
- (int)StringAsPlaceTypeHint:(id)arg1;
- (void)addFormattedAddressLineHint:(id)arg1;
- (int)addressGeocodeAccuracyHint;
- (id)addressGeocodeAccuracyHintAsString:(int)arg1;
- (id)addressHint;
- (id)addressObjectHint;
- (void)clearFormattedAddressLineHints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (id)formattedAddressLineHintAtIndex:(unsigned long long)arg1;
- (id)formattedAddressLineHints;
- (unsigned long long)formattedAddressLineHintsCount;
- (BOOL)hasAddressGeocodeAccuracyHint;
- (BOOL)hasAddressHint;
- (BOOL)hasAddressObjectHint;
- (BOOL)hasExternalItemId;
- (BOOL)hasLocationHint;
- (BOOL)hasMuid;
- (BOOL)hasPlaceNameHint;
- (BOOL)hasPlaceTypeHint;
- (BOOL)hasResultProviderId;
- (BOOL)hasVendorId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (id)placeTypeHintAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setAddressGeocodeAccuracyHint:(int)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setAddressObjectHint:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasPlaceTypeHint:(BOOL)arg1;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setVendorId:(id)arg1;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

// GEOPDVendorSpecificPlaceRefinementParameters (PlaceDataExtras)

- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 contentProvider:(id)arg3;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(struct { double x1; double x2; })arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;

@end