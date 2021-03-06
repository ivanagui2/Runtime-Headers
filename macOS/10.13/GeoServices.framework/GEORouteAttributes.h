/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEORouteAttributes : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _additionalTransportTypes;
    GEOAutomobileOptions * _automobileOptions;
    int  _basicPointsToBeIncluded;
    GEODestinationInfo * _destinationInfo;
    int  _destinationType;
    BOOL  _enableExperimentalMode;
    struct { 
        unsigned int timepoint : 1; 
        unsigned int basicPointsToBeIncluded : 1; 
        unsigned int destinationType : 1; 
        unsigned int mainTransportType : 1; 
        unsigned int trafficType : 1; 
        unsigned int walkingLimitMeters : 1; 
        unsigned int enableExperimentalMode : 1; 
        unsigned int includeContingencyRoutes : 1; 
        unsigned int includeCrossLanguagePhonetics : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeLaneGuidance : 1; 
        unsigned int includeManeuverIcons : 1; 
        unsigned int includePhonetics : 1; 
        unsigned int includeTrafficAlongRoute : 1; 
        unsigned int includeTrafficIncidents : 1; 
        unsigned int includeZilchPoints : 1; 
        unsigned int useMetricThreshold : 1; 
    }  _has;
    BOOL  _includeContingencyRoutes;
    BOOL  _includeCrossLanguagePhonetics;
    BOOL  _includeHistoricTravelTime;
    BOOL  _includeLaneGuidance;
    BOOL  _includeManeuverIcons;
    BOOL  _includePhonetics;
    BOOL  _includeTrafficAlongRoute;
    BOOL  _includeTrafficIncidents;
    BOOL  _includeZilchPoints;
    int  _mainTransportType;
    NSString * _phoneticLocaleIdentifier;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepoint;
    int  _trafficType;
    GEOTransitOptions * _transitOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _uiContexts;
    BOOL  _useMetricThreshold;
    unsigned int  _walkingLimitMeters;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) int*additionalTransportTypes;
@property (nonatomic, readonly) unsigned long long additionalTransportTypesCount;
@property (nonatomic, readwrite, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, readwrite) int basicPointsToBeIncluded;
@property (nonatomic, readwrite, retain) GEODestinationInfo *destinationInfo;
@property (nonatomic, readwrite) int destinationType;
@property (nonatomic, readwrite) BOOL enableExperimentalMode;
@property (nonatomic, readonly) BOOL hasAutomobileOptions;
@property (nonatomic, readwrite) BOOL hasBasicPointsToBeIncluded;
@property (nonatomic, readonly) BOOL hasDestinationInfo;
@property (nonatomic, readwrite) BOOL hasDestinationType;
@property (nonatomic, readwrite) BOOL hasEnableExperimentalMode;
@property (nonatomic, readwrite) BOOL hasIncludeContingencyRoutes;
@property (nonatomic, readwrite) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic, readwrite) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL hasIncludeLaneGuidance;
@property (nonatomic, readwrite) BOOL hasIncludeManeuverIcons;
@property (nonatomic, readwrite) BOOL hasIncludePhonetics;
@property (nonatomic, readwrite) BOOL hasIncludeTrafficAlongRoute;
@property (nonatomic, readwrite) BOOL hasIncludeTrafficIncidents;
@property (nonatomic, readwrite) BOOL hasIncludeZilchPoints;
@property (nonatomic, readwrite) BOOL hasMainTransportType;
@property (nonatomic, readonly) BOOL hasPhoneticLocaleIdentifier;
@property (nonatomic, readwrite) BOOL hasTimepoint;
@property (nonatomic, readwrite) BOOL hasTrafficType;
@property (nonatomic, readonly) BOOL hasTransitOptions;
@property (nonatomic, readwrite) BOOL hasUseMetricThreshold;
@property (nonatomic, readwrite) BOOL hasWalkingLimitMeters;
@property (nonatomic, readonly) BOOL hasWalkingOptions;
@property (nonatomic, readwrite) BOOL includeContingencyRoutes;
@property (nonatomic, readwrite) BOOL includeCrossLanguagePhonetics;
@property (nonatomic, readwrite) BOOL includeHistoricTravelTime;
@property (nonatomic, readwrite) BOOL includeLaneGuidance;
@property (nonatomic, readwrite) BOOL includeManeuverIcons;
@property (nonatomic, readwrite) BOOL includePhonetics;
@property (nonatomic, readwrite) BOOL includeTrafficAlongRoute;
@property (nonatomic, readwrite) BOOL includeTrafficIncidents;
@property (nonatomic, readwrite) BOOL includeZilchPoints;
@property (nonatomic, readwrite) int mainTransportType;
@property (nonatomic, readwrite, retain) NSString *phoneticLocaleIdentifier;
@property (nonatomic, readwrite) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timepoint;
@property (nonatomic, readwrite) int trafficType;
@property (nonatomic, readwrite, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) int*uiContexts;
@property (nonatomic, readonly) unsigned long long uiContextsCount;
@property (nonatomic, readwrite) BOOL useMetricThreshold;
@property (nonatomic, readwrite) unsigned int walkingLimitMeters;
@property (nonatomic, readwrite, retain) GEOWalkingOptions *walkingOptions;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices

- (void).cxx_destruct;
- (int)StringAsAdditionalTransportTypes:(id)arg1;
- (int)StringAsBasicPointsToBeIncluded:(id)arg1;
- (int)StringAsDestinationType:(id)arg1;
- (int)StringAsMainTransportType:(id)arg1;
- (int)StringAsTrafficType:(id)arg1;
- (int)StringAsUiContexts:(id)arg1;
- (void)addAdditionalTransportType:(int)arg1;
- (void)addUiContext:(int)arg1;
- (int)additionalTransportTypeAtIndex:(unsigned long long)arg1;
- (int*)additionalTransportTypes;
- (id)additionalTransportTypesAsString:(int)arg1;
- (unsigned long long)additionalTransportTypesCount;
- (id)automobileOptions;
- (int)basicPointsToBeIncluded;
- (id)basicPointsToBeIncludedAsString:(int)arg1;
- (void)clearAdditionalTransportTypes;
- (void)clearUiContexts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destinationInfo;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (BOOL)enableExperimentalMode;
- (BOOL)hasAutomobileOptions;
- (BOOL)hasBasicPointsToBeIncluded;
- (BOOL)hasDestinationInfo;
- (BOOL)hasDestinationType;
- (BOOL)hasEnableExperimentalMode;
- (BOOL)hasIncludeContingencyRoutes;
- (BOOL)hasIncludeCrossLanguagePhonetics;
- (BOOL)hasIncludeHistoricTravelTime;
- (BOOL)hasIncludeLaneGuidance;
- (BOOL)hasIncludeManeuverIcons;
- (BOOL)hasIncludePhonetics;
- (BOOL)hasIncludeTrafficAlongRoute;
- (BOOL)hasIncludeTrafficIncidents;
- (BOOL)hasIncludeZilchPoints;
- (BOOL)hasMainTransportType;
- (BOOL)hasPhoneticLocaleIdentifier;
- (BOOL)hasTimepoint;
- (BOOL)hasTrafficType;
- (BOOL)hasTransitOptions;
- (BOOL)hasUseMetricThreshold;
- (BOOL)hasWalkingLimitMeters;
- (BOOL)hasWalkingOptions;
- (unsigned long long)hash;
- (BOOL)includeContingencyRoutes;
- (BOOL)includeCrossLanguagePhonetics;
- (BOOL)includeHistoricTravelTime;
- (BOOL)includeLaneGuidance;
- (BOOL)includeManeuverIcons;
- (BOOL)includePhonetics;
- (BOOL)includeTrafficAlongRoute;
- (BOOL)includeTrafficIncidents;
- (BOOL)includeZilchPoints;
- (BOOL)isEqual:(id)arg1;
- (int)mainTransportType;
- (id)mainTransportTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)phoneticLocaleIdentifier;
- (BOOL)readFrom:(id)arg1;
- (void)setAdditionalTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAutomobileOptions:(id)arg1;
- (void)setBasicPointsToBeIncluded:(int)arg1;
- (void)setDestinationInfo:(id)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setEnableExperimentalMode:(BOOL)arg1;
- (void)setHasBasicPointsToBeIncluded:(BOOL)arg1;
- (void)setHasDestinationType:(BOOL)arg1;
- (void)setHasEnableExperimentalMode:(BOOL)arg1;
- (void)setHasIncludeContingencyRoutes:(BOOL)arg1;
- (void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1;
- (void)setHasIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setHasIncludeLaneGuidance:(BOOL)arg1;
- (void)setHasIncludeManeuverIcons:(BOOL)arg1;
- (void)setHasIncludePhonetics:(BOOL)arg1;
- (void)setHasIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setHasIncludeTrafficIncidents:(BOOL)arg1;
- (void)setHasIncludeZilchPoints:(BOOL)arg1;
- (void)setHasMainTransportType:(BOOL)arg1;
- (void)setHasTimepoint:(BOOL)arg1;
- (void)setHasTrafficType:(BOOL)arg1;
- (void)setHasUseMetricThreshold:(BOOL)arg1;
- (void)setHasWalkingLimitMeters:(BOOL)arg1;
- (void)setIncludeContingencyRoutes:(BOOL)arg1;
- (void)setIncludeCrossLanguagePhonetics:(BOOL)arg1;
- (void)setIncludeHistoricTravelTime:(BOOL)arg1;
- (void)setIncludeLaneGuidance:(BOOL)arg1;
- (void)setIncludeManeuverIcons:(BOOL)arg1;
- (void)setIncludePhonetics:(BOOL)arg1;
- (void)setIncludeTrafficAlongRoute:(BOOL)arg1;
- (void)setIncludeTrafficIncidents:(BOOL)arg1;
- (void)setIncludeZilchPoints:(BOOL)arg1;
- (void)setMainTransportType:(int)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setTimepoint:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setTrafficType:(int)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setUiContexts:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUseMetricThreshold:(BOOL)arg1;
- (void)setWalkingLimitMeters:(unsigned int)arg1;
- (void)setWalkingOptions:(id)arg1;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timepoint;
- (int)trafficType;
- (id)trafficTypeAsString:(int)arg1;
- (id)transitOptions;
- (int)uiContextAtIndex:(unsigned long long)arg1;
- (int*)uiContexts;
- (id)uiContextsAsString:(int)arg1;
- (unsigned long long)uiContextsCount;
- (BOOL)useMetricThreshold;
- (unsigned int)walkingLimitMeters;
- (id)walkingOptions;
- (void)writeTo:(id)arg1;

// GEORouteAttributes (GEORouteAttributesExtras)

+ (id)defaultRouteAttributes;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation

// GEORouteAttributes (MNExtras)

+ (id)defaultRouteAttributesForTransportType:(int)arg1;

- (void)setDestinationInfoForWaypoint:(id)arg1;

@end
