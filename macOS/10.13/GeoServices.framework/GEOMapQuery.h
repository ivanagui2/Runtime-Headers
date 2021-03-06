/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOMapQuery : PBCodable <NSCopying> {
    int  _clientImgFmt;
    int  _clientImgMaxHeight;
    int  _clientImgMaxWidth;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int clientImgFmt : 1; 
        unsigned int clientImgMaxHeight : 1; 
        unsigned int clientImgMaxWidth : 1; 
        unsigned int mapCenterX : 1; 
        unsigned int mapCenterY : 1; 
        unsigned int mapSpanX : 1; 
        unsigned int mapSpanY : 1; 
        unsigned int requestType : 1; 
        unsigned int tilesizeX : 1; 
        unsigned int tilesizeY : 1; 
        unsigned int zoomlevel : 1; 
    }  _has;
    int  _mapCenterX;
    int  _mapCenterY;
    GEOMapRegion * _mapRegion;
    int  _mapSpanX;
    int  _mapSpanY;
    GEOPlaceSearchRequest * _placeSearchRequest;
    NSString * _query;
    int  _requestType;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    int  _tilesizeX;
    int  _tilesizeY;
    GEOLocation * _userLocation;
    int  _zoomlevel;
}

@property (nonatomic, readwrite) int clientImgFmt;
@property (nonatomic, readwrite) int clientImgMaxHeight;
@property (nonatomic, readwrite) int clientImgMaxWidth;
@property (nonatomic, readwrite) BOOL hasClientImgFmt;
@property (nonatomic, readwrite) BOOL hasClientImgMaxHeight;
@property (nonatomic, readwrite) BOOL hasClientImgMaxWidth;
@property (nonatomic, readwrite) BOOL hasMapCenterX;
@property (nonatomic, readwrite) BOOL hasMapCenterY;
@property (nonatomic, readonly) BOOL hasMapRegion;
@property (nonatomic, readwrite) BOOL hasMapSpanX;
@property (nonatomic, readwrite) BOOL hasMapSpanY;
@property (nonatomic, readonly) BOOL hasPlaceSearchRequest;
@property (nonatomic, readonly) BOOL hasQuery;
@property (nonatomic, readwrite) BOOL hasRequestType;
@property (nonatomic, readwrite) BOOL hasSessionID;
@property (nonatomic, readwrite) BOOL hasTilesizeX;
@property (nonatomic, readwrite) BOOL hasTilesizeY;
@property (nonatomic, readonly) BOOL hasUserLocation;
@property (nonatomic, readwrite) BOOL hasZoomlevel;
@property (nonatomic, readwrite) int mapCenterX;
@property (nonatomic, readwrite) int mapCenterY;
@property (nonatomic, readwrite, retain) GEOMapRegion *mapRegion;
@property (nonatomic, readwrite) int mapSpanX;
@property (nonatomic, readwrite) int mapSpanY;
@property (nonatomic, readwrite, retain) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, readwrite, retain) NSString *query;
@property (nonatomic, readwrite) int requestType;
@property (nonatomic, readwrite) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, readwrite) int tilesizeX;
@property (nonatomic, readwrite) int tilesizeY;
@property (nonatomic, readwrite, retain) GEOLocation *userLocation;
@property (nonatomic, readwrite) int zoomlevel;

- (void).cxx_destruct;
- (int)StringAsClientImgFmt:(id)arg1;
- (int)StringAsRequestType:(id)arg1;
- (int)clientImgFmt;
- (id)clientImgFmtAsString:(int)arg1;
- (int)clientImgMaxHeight;
- (int)clientImgMaxWidth;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClientImgFmt;
- (BOOL)hasClientImgMaxHeight;
- (BOOL)hasClientImgMaxWidth;
- (BOOL)hasMapCenterX;
- (BOOL)hasMapCenterY;
- (BOOL)hasMapRegion;
- (BOOL)hasMapSpanX;
- (BOOL)hasMapSpanY;
- (BOOL)hasPlaceSearchRequest;
- (BOOL)hasQuery;
- (BOOL)hasRequestType;
- (BOOL)hasSessionID;
- (BOOL)hasTilesizeX;
- (BOOL)hasTilesizeY;
- (BOOL)hasUserLocation;
- (BOOL)hasZoomlevel;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (int)mapCenterX;
- (int)mapCenterY;
- (id)mapRegion;
- (int)mapSpanX;
- (int)mapSpanY;
- (void)mergeFrom:(id)arg1;
- (id)placeSearchRequest;
- (id)query;
- (BOOL)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setClientImgFmt:(int)arg1;
- (void)setClientImgMaxHeight:(int)arg1;
- (void)setClientImgMaxWidth:(int)arg1;
- (void)setHasClientImgFmt:(BOOL)arg1;
- (void)setHasClientImgMaxHeight:(BOOL)arg1;
- (void)setHasClientImgMaxWidth:(BOOL)arg1;
- (void)setHasMapCenterX:(BOOL)arg1;
- (void)setHasMapCenterY:(BOOL)arg1;
- (void)setHasMapSpanX:(BOOL)arg1;
- (void)setHasMapSpanY:(BOOL)arg1;
- (void)setHasRequestType:(BOOL)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasTilesizeX:(BOOL)arg1;
- (void)setHasTilesizeY:(BOOL)arg1;
- (void)setHasZoomlevel:(BOOL)arg1;
- (void)setMapCenterX:(int)arg1;
- (void)setMapCenterY:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapSpanX:(int)arg1;
- (void)setMapSpanY:(int)arg1;
- (void)setPlaceSearchRequest:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTilesizeX:(int)arg1;
- (void)setTilesizeY:(int)arg1;
- (void)setUserLocation:(id)arg1;
- (void)setZoomlevel:(int)arg1;
- (int)tilesizeX;
- (int)tilesizeY;
- (id)userLocation;
- (void)writeTo:(id)arg1;
- (int)zoomlevel;

@end
