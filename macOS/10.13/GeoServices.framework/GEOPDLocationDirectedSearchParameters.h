/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDLocationDirectedSearchParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxResults : 1; 
        unsigned int searchType : 1; 
        unsigned int sortOrder : 1; 
    }  _has;
    unsigned int  _maxResults;
    GEOPDNearestTransitParameters * _nearestTransitParameters;
    GEOLatLng * _searchLocation;
    NSString * _searchString;
    int  _searchType;
    int  _sortOrder;
    PBUnknownFields * _unknownFields;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, readwrite) BOOL hasMaxResults;
@property (nonatomic, readonly) BOOL hasNearestTransitParameters;
@property (nonatomic, readonly) BOOL hasSearchLocation;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic, readwrite) BOOL hasSearchType;
@property (nonatomic, readwrite) BOOL hasSortOrder;
@property (nonatomic, readonly) BOOL hasViewportInfo;
@property (nonatomic, readwrite) unsigned int maxResults;
@property (nonatomic, readwrite, retain) GEOPDNearestTransitParameters *nearestTransitParameters;
@property (nonatomic, readwrite, retain) GEOLatLng *searchLocation;
@property (nonatomic, readwrite, retain) NSString *searchString;
@property (nonatomic, readwrite) int searchType;
@property (nonatomic, readwrite) int sortOrder;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (int)StringAsSortOrder:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasMaxResults;
- (BOOL)hasNearestTransitParameters;
- (BOOL)hasSearchLocation;
- (BOOL)hasSearchString;
- (BOOL)hasSearchType;
- (BOOL)hasSortOrder;
- (BOOL)hasViewportInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)nearestTransitParameters;
- (BOOL)readFrom:(id)arg1;
- (id)searchLocation;
- (id)searchString;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setHasMaxResults:(BOOL)arg1;
- (void)setHasSearchType:(BOOL)arg1;
- (void)setHasSortOrder:(BOOL)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setNearestTransitParameters:(id)arg1;
- (void)setSearchLocation:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)sortOrder;
- (id)sortOrderAsString:(int)arg1;
- (id)unknownFields;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

// GEOPDLocationDirectedSearchParameters (PlaceDataExtras)

- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;

@end