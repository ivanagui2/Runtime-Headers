/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOActiveTileGroup : PBCodable <NSCopying> {
    NSString * _abExperimentURL;
    NSMutableArray * _activeResources;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeScales;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeScenarios;
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSMutableArray * _announcementsSupportedLanguages;
    NSString * _announcementsURL;
    NSMutableArray * _attributions;
    NSString * _backgroundDispatcherURL;
    NSString * _backgroundRevGeoURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _batchTrafficProbeURL;
    NSString * _bluePOIURL;
    NSString * _businessPortalBaseURL;
    GEODataSetDescription * _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    NSMutableArray * _fontChecksums;
    NSMutableArray * _fonts;
    struct { 
        unsigned int mapLayersMetadata : 1; 
        unsigned int locationShiftVersion : 1; 
        unsigned int modelVersion : 1; 
        unsigned int operationMode : 1; 
    }  _has;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _hybridUnavailableRegions;
    unsigned long long  _hybridUnavailableRegionsCount;
    unsigned long long  _hybridUnavailableRegionsSpace;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    unsigned int  _identifier;
    NSMutableArray * _locationShiftEnabledRegions;
    unsigned int  _locationShiftVersion;
    NSString * _logMessageUsageURL;
    NSString * _logMessageUsageV3URL;
    NSMutableArray * _mapLayers;
    struct GEOMapLayersMetadata { 
        double _lastUpdatedTimestamp; 
        BOOL _stale; 
        struct { 
            unsigned int lastUpdatedTimestamp : 1; 
            unsigned int stale : 1; 
        } _has; 
    }  _mapLayersMetadata;
    unsigned int  _modelVersion;
    int  _operationMode;
    NSString * _polyLocationShiftURL;
    NSString * _proactiveRoutingURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    NSString * _realtimeTrafficProbeURL;
    NSMutableArray * _regionalResourceRegions;
    NSMutableArray * _regionalResourceTiles;
    NSMutableArray * _regionalResources;
    NSString * _regionalResourcesURL;
    NSString * _releaseInfo;
    NSData * _reserved;
    NSMutableArray * _resources;
    NSString * _resourcesURL;
    NSString * _reverseGeocoderVersionsURL;
    NSString * _searchAttributionManifestURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
    NSMutableArray * _staleResources;
    NSMutableArray * _styleSheetChecksums;
    NSMutableArray * _styleSheets;
    NSMutableArray * _textureChecksums;
    NSMutableArray * _textures;
    NSMutableArray * _tileSets;
    NSString * _uniqueIdentifier;
    PBUnknownFields * _unknownFields;
    GEOVersionManifest * _versionManifest;
    NSMutableArray * _xmlChecksums;
    NSMutableArray * _xmls;
}

@property (nonatomic, readwrite, retain) NSString *abExperimentURL;
@property (nonatomic, readwrite, retain) NSMutableArray *activeResources;
@property (nonatomic, readonly) int*activeScales;
@property (nonatomic, readonly) unsigned long long activeScalesCount;
@property (nonatomic, readonly) int*activeScenarios;
@property (nonatomic, readonly) unsigned long long activeScenariosCount;
@property (nonatomic, readwrite, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, readwrite, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, readwrite, retain) NSMutableArray *announcementsSupportedLanguages;
@property (nonatomic, readwrite, retain) NSString *announcementsURL;
@property (nonatomic, readwrite, retain) NSMutableArray *attributions;
@property (nonatomic, readwrite, retain) NSString *backgroundDispatcherURL;
@property (nonatomic, readwrite, retain) NSString *backgroundRevGeoURL;
@property (nonatomic, readwrite, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, readwrite, retain) NSString *batchTrafficProbeURL;
@property (nonatomic, readwrite, retain) NSString *bluePOIURL;
@property (nonatomic, readwrite, retain) NSString *businessPortalBaseURL;
@property (nonatomic, readwrite, retain) GEODataSetDescription *dataSet;
@property (nonatomic, readwrite, retain) NSString *directionsURL;
@property (nonatomic, readwrite, retain) NSString *dispatcherURL;
@property (nonatomic, readwrite, retain) NSString *etaURL;
@property (nonatomic, readwrite, retain) NSMutableArray *fontChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *fonts;
@property (nonatomic, readonly) BOOL hasAbExperimentURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionInitURL;
@property (nonatomic, readonly) BOOL hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) BOOL hasAnnouncementsURL;
@property (nonatomic, readonly) BOOL hasBackgroundDispatcherURL;
@property (nonatomic, readonly) BOOL hasBackgroundRevGeoURL;
@property (nonatomic, readonly) BOOL hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) BOOL hasBatchTrafficProbeURL;
@property (nonatomic, readonly) BOOL hasBluePOIURL;
@property (nonatomic, readonly) BOOL hasBusinessPortalBaseURL;
@property (nonatomic, readonly) BOOL hasDataSet;
@property (nonatomic, readonly) BOOL hasDirectionsURL;
@property (nonatomic, readonly) BOOL hasDispatcherURL;
@property (nonatomic, readonly) BOOL hasEtaURL;
@property (nonatomic, readwrite) BOOL hasLocationShiftVersion;
@property (nonatomic, readonly) BOOL hasLogMessageUsageURL;
@property (nonatomic, readonly) BOOL hasLogMessageUsageV3URL;
@property (nonatomic, readwrite) BOOL hasMapLayersMetadata;
@property (nonatomic, readwrite) BOOL hasModelVersion;
@property (nonatomic, readwrite) BOOL hasOperationMode;
@property (nonatomic, readonly) BOOL hasPolyLocationShiftURL;
@property (nonatomic, readonly) BOOL hasProactiveRoutingURL;
@property (nonatomic, readonly) BOOL hasProblemCategoriesURL;
@property (nonatomic, readonly) BOOL hasProblemOptInURL;
@property (nonatomic, readonly) BOOL hasProblemStatusURL;
@property (nonatomic, readonly) BOOL hasProblemSubmissionURL;
@property (nonatomic, readonly) BOOL hasRealtimeTrafficProbeURL;
@property (nonatomic, readonly) BOOL hasRegionalResourcesURL;
@property (nonatomic, readonly) BOOL hasReleaseInfo;
@property (nonatomic, readonly) BOOL hasReserved;
@property (nonatomic, readonly) BOOL hasResourcesURL;
@property (nonatomic, readonly) BOOL hasReverseGeocoderVersionsURL;
@property (nonatomic, readonly) BOOL hasSearchAttributionManifestURL;
@property (nonatomic, readonly) BOOL hasSimpleETAURL;
@property (nonatomic, readonly) BOOL hasSpatialLookupURL;
@property (nonatomic, readonly) BOOL hasUniqueIdentifier;
@property (nonatomic, readonly) BOOL hasVersionManifest;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*hybridUnavailableRegions;
@property (nonatomic, readonly) unsigned long long hybridUnavailableRegionsCount;
@property (nonatomic, readwrite, retain) NSMutableArray *iconChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *icons;
@property (nonatomic, readwrite) unsigned int identifier;
@property (nonatomic, readwrite, retain) NSMutableArray *locationShiftEnabledRegions;
@property (nonatomic, readwrite) unsigned int locationShiftVersion;
@property (nonatomic, readwrite, retain) NSString *logMessageUsageURL;
@property (nonatomic, readwrite, retain) NSString *logMessageUsageV3URL;
@property (nonatomic, readwrite, retain) NSMutableArray *mapLayers;
@property (nonatomic, readwrite) struct GEOMapLayersMetadata { double x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } mapLayersMetadata;
@property (nonatomic, readwrite) unsigned int modelVersion;
@property (nonatomic, readwrite) int operationMode;
@property (nonatomic, readwrite, retain) NSString *polyLocationShiftURL;
@property (nonatomic, readwrite, retain) NSString *proactiveRoutingURL;
@property (nonatomic, readwrite, retain) NSString *problemCategoriesURL;
@property (nonatomic, readwrite, retain) NSString *problemOptInURL;
@property (nonatomic, readwrite, retain) NSString *problemStatusURL;
@property (nonatomic, readwrite, retain) NSString *problemSubmissionURL;
@property (nonatomic, readwrite, retain) NSString *realtimeTrafficProbeURL;
@property (nonatomic, readwrite, retain) NSMutableArray *regionalResourceRegions;
@property (nonatomic, readwrite, retain) NSMutableArray *regionalResourceTiles;
@property (nonatomic, readwrite, retain) NSMutableArray *regionalResources;
@property (nonatomic, readwrite, retain) NSString *regionalResourcesURL;
@property (nonatomic, readwrite, retain) NSString *releaseInfo;
@property (nonatomic, readwrite, retain) NSData *reserved;
@property (nonatomic, readwrite, retain) NSMutableArray *resources;
@property (nonatomic, readwrite, retain) NSString *resourcesURL;
@property (nonatomic, readwrite, retain) NSString *reverseGeocoderVersionsURL;
@property (nonatomic, readwrite, retain) NSString *searchAttributionManifestURL;
@property (nonatomic, readwrite, retain) NSString *simpleETAURL;
@property (nonatomic, readwrite, retain) NSString *spatialLookupURL;
@property (nonatomic, readwrite, retain) NSMutableArray *staleResources;
@property (nonatomic, readwrite, retain) NSMutableArray *styleSheetChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *styleSheets;
@property (nonatomic, readwrite, retain) NSMutableArray *textureChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *textures;
@property (nonatomic, readwrite, retain) NSMutableArray *tileSets;
@property (nonatomic, readwrite, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite, retain) GEOVersionManifest *versionManifest;
@property (nonatomic, readwrite, retain) NSMutableArray *xmlChecksums;
@property (nonatomic, readwrite, retain) NSMutableArray *xmls;

+ (Class)activeResourceType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)attributionType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)mapLayerType;
+ (Class)regionalResourceRegionType;
+ (Class)regionalResourceTileType;
+ (Class)regionalResourceType;
+ (Class)resourceType;
+ (Class)staleResourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)tileSetType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;

- (void).cxx_destruct;
- (int)StringAsActiveScales:(id)arg1;
- (int)StringAsActiveScenarios:(id)arg1;
- (int)StringAsOperationMode:(id)arg1;
- (id)abExperimentURL;
- (id)activeResourceAtIndex:(unsigned long long)arg1;
- (id)activeResources;
- (unsigned long long)activeResourcesCount;
- (int)activeScaleAtIndex:(unsigned long long)arg1;
- (int*)activeScales;
- (id)activeScalesAsString:(int)arg1;
- (unsigned long long)activeScalesCount;
- (int)activeScenarioAtIndex:(unsigned long long)arg1;
- (int*)activeScenarios;
- (id)activeScenariosAsString:(int)arg1;
- (unsigned long long)activeScenariosCount;
- (void)addActiveResource:(id)arg1;
- (void)addActiveScale:(int)arg1;
- (void)addActiveScenario:(int)arg1;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)addMapLayer:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addStaleResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)announcementsURL;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)backgroundDispatcherURL;
- (id)backgroundRevGeoURL;
- (id)batchReverseGeocoderURL;
- (id)batchTrafficProbeURL;
- (id)bluePOIURL;
- (id)businessPortalBaseURL;
- (void)clearActiveResources;
- (void)clearActiveScales;
- (void)clearActiveScenarios;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearHybridUnavailableRegions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearLocationShiftEnabledRegions;
- (void)clearMapLayers;
- (void)clearRegionalResourceRegions;
- (void)clearRegionalResourceTiles;
- (void)clearRegionalResources;
- (void)clearResources;
- (void)clearStaleResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSet;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (id)etaURL;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (id)fontChecksums;
- (unsigned long long)fontChecksumsCount;
- (id)fonts;
- (unsigned long long)fontsCount;
- (BOOL)hasAbExperimentURL;
- (BOOL)hasAddressCorrectionInitURL;
- (BOOL)hasAddressCorrectionUpdateURL;
- (BOOL)hasAnnouncementsURL;
- (BOOL)hasBackgroundDispatcherURL;
- (BOOL)hasBackgroundRevGeoURL;
- (BOOL)hasBatchReverseGeocoderURL;
- (BOOL)hasBatchTrafficProbeURL;
- (BOOL)hasBluePOIURL;
- (BOOL)hasBusinessPortalBaseURL;
- (BOOL)hasDataSet;
- (BOOL)hasDirectionsURL;
- (BOOL)hasDispatcherURL;
- (BOOL)hasEtaURL;
- (BOOL)hasLocationShiftVersion;
- (BOOL)hasLogMessageUsageURL;
- (BOOL)hasLogMessageUsageV3URL;
- (BOOL)hasMapLayersMetadata;
- (BOOL)hasModelVersion;
- (BOOL)hasOperationMode;
- (BOOL)hasPolyLocationShiftURL;
- (BOOL)hasProactiveRoutingURL;
- (BOOL)hasProblemCategoriesURL;
- (BOOL)hasProblemOptInURL;
- (BOOL)hasProblemStatusURL;
- (BOOL)hasProblemSubmissionURL;
- (BOOL)hasRealtimeTrafficProbeURL;
- (BOOL)hasRegionalResourcesURL;
- (BOOL)hasReleaseInfo;
- (BOOL)hasReserved;
- (BOOL)hasResourcesURL;
- (BOOL)hasReverseGeocoderVersionsURL;
- (BOOL)hasSearchAttributionManifestURL;
- (BOOL)hasSimpleETAURL;
- (BOOL)hasSpatialLookupURL;
- (BOOL)hasUniqueIdentifier;
- (BOOL)hasVersionManifest;
- (unsigned long long)hash;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)hybridUnavailableRegions;
- (unsigned long long)hybridUnavailableRegionsCount;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (id)iconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)icons;
- (unsigned long long)iconsCount;
- (unsigned int)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (id)locationShiftEnabledRegions;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (unsigned int)locationShiftVersion;
- (id)logMessageUsageURL;
- (id)logMessageUsageV3URL;
- (id)mapLayerAtIndex:(unsigned long long)arg1;
- (id)mapLayers;
- (unsigned long long)mapLayersCount;
- (struct GEOMapLayersMetadata { double x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })mapLayersMetadata;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelVersion;
- (int)operationMode;
- (id)operationModeAsString:(int)arg1;
- (id)polyLocationShiftURL;
- (id)proactiveRoutingURL;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (BOOL)readFrom:(id)arg1;
- (id)realtimeTrafficProbeURL;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (id)regionalResourceRegions;
- (unsigned long long)regionalResourceRegionsCount;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (id)regionalResourceTiles;
- (unsigned long long)regionalResourceTilesCount;
- (id)regionalResources;
- (unsigned long long)regionalResourcesCount;
- (id)regionalResourcesURL;
- (id)releaseInfo;
- (id)reserved;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resources;
- (unsigned long long)resourcesCount;
- (id)resourcesURL;
- (id)reverseGeocoderVersionsURL;
- (id)searchAttributionManifestURL;
- (void)setAbExperimentURL:(id)arg1;
- (void)setActiveResources:(id)arg1;
- (void)setActiveScales:(int*)arg1 count:(unsigned long long)arg2;
- (void)setActiveScenarios:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setBackgroundDispatcherURL:(id)arg1;
- (void)setBackgroundRevGeoURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBatchTrafficProbeURL:(id)arg1;
- (void)setBluePOIURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSet:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setFontChecksums:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setHasLocationShiftVersion:(BOOL)arg1;
- (void)setHasMapLayersMetadata:(BOOL)arg1;
- (void)setHasModelVersion:(BOOL)arg1;
- (void)setHasOperationMode:(BOOL)arg1;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLocationShiftEnabledRegions:(id)arg1;
- (void)setLocationShiftVersion:(unsigned int)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setLogMessageUsageV3URL:(id)arg1;
- (void)setMapLayers:(id)arg1;
- (void)setMapLayersMetadata:(struct GEOMapLayersMetadata { double x1; BOOL x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setOperationMode:(int)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setProactiveRoutingURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setRealtimeTrafficProbeURL:(id)arg1;
- (void)setRegionalResourceRegions:(id)arg1;
- (void)setRegionalResourceTiles:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setRegionalResourcesURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setReserved:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (void)setStaleResources:(id)arg1;
- (void)setStyleSheetChecksums:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTextureChecksums:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setXmlChecksums:(id)arg1;
- (void)setXmls:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (id)staleResources;
- (unsigned long long)staleResourcesCount;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksums;
- (unsigned long long)styleSheetChecksumsCount;
- (id)styleSheets;
- (unsigned long long)styleSheetsCount;
- (id)textureAtIndex:(unsigned long long)arg1;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (id)textureChecksums;
- (unsigned long long)textureChecksumsCount;
- (id)textures;
- (unsigned long long)texturesCount;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (id)tileSets;
- (unsigned long long)tileSetsCount;
- (id)uniqueIdentifier;
- (id)unknownFields;
- (id)versionManifest;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (id)xmlChecksums;
- (unsigned long long)xmlChecksumsCount;
- (id)xmls;
- (unsigned long long)xmlsCount;

// GEOActiveTileGroup (CreationExtras)

- (void)populateRegionalResources:(id)arg1;

// GEOActiveTileGroup (GEOResourceManifestManagerAdditions)

- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (void)_resetBestLanguages;
- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)hasRegionalResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)isHybridModeAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)iterateActiveTileSetsWithAltitudeManifest:(id)arg1 block:(id)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 scale:(int)arg2 scenarios:(id)arg3;
- (id)regionalResourcesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;

// GEOActiveTileGroup (LegacyCompatibility)

- (void)clearModernFormatFields;
- (void)populateLegacyFormat;

@end
