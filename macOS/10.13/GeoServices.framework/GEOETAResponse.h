/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOETAResponse : PBCodable <NSCopying> {
    GEOClientMetrics * _clientMetrics;
    GEOPDDatasetABStatus * _datasetAbStatus;
    unsigned long long  _debugServerLatencyMs;
    NSMutableArray * _etaResultReferencePointDestinations;
    GEOETAResult * _etaResultReferencePointOrigin;
    NSMutableArray * _etaResults;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int debugServerLatencyMs : 1; 
        unsigned int status : 1; 
    }  _has;
    GEOPlaceSearchResponse * _originPlaceSearchResponse;
    struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _problemDetails;
    unsigned long long  _problemDetailsCount;
    unsigned long long  _problemDetailsSpace;
    int  _status;
}

@property (nonatomic, readwrite, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, readwrite, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, readwrite) unsigned long long debugServerLatencyMs;
@property (nonatomic, readwrite, retain) NSMutableArray *etaResultReferencePointDestinations;
@property (nonatomic, readwrite, retain) GEOETAResult *etaResultReferencePointOrigin;
@property (nonatomic, readwrite, retain) NSMutableArray *etaResults;
@property (nonatomic, readwrite, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, readonly) BOOL hasClientMetrics;
@property (nonatomic, readonly) BOOL hasDatasetAbStatus;
@property (nonatomic, readwrite) BOOL hasDebugServerLatencyMs;
@property (nonatomic, readonly) BOOL hasEtaResultReferencePointOrigin;
@property (nonatomic, readonly) BOOL hasEtaServiceSummary;
@property (nonatomic, readonly) BOOL hasOriginPlaceSearchResponse;
@property (nonatomic, readwrite) BOOL hasStatus;
@property (nonatomic, readwrite, retain) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (nonatomic, readonly) struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*problemDetails;
@property (nonatomic, readonly) unsigned long long problemDetailsCount;
@property (nonatomic, readwrite) int status;

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addEtaResult:(id)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearEtaResultReferencePointDestinations;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1;
- (id)etaResultReferencePointDestinations;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (id)etaResultReferencePointOrigin;
- (id)etaResults;
- (unsigned long long)etaResultsCount;
- (BOOL)hasDatasetAbStatus;
- (BOOL)hasEtaResultReferencePointOrigin;
- (BOOL)hasOriginPlaceSearchResponse;
- (BOOL)hasStatus;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originPlaceSearchResponse;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned long long)problemDetailsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setEtaResultReferencePointDestinations:(id)arg1;
- (void)setEtaResultReferencePointOrigin:(id)arg1;
- (void)setEtaResults:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setOriginPlaceSearchResponse:(id)arg1;
- (void)setProblemDetails:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

// GEOETAResponse (GEOClientGeo3Extension)

- (id)clientMetrics;
- (BOOL)hasClientMetrics;
- (void)setClientMetrics:(id)arg1;

// GEOETAResponse (GEOEtaClientExtendedExtension)

- (unsigned long long)debugServerLatencyMs;
- (id)etaServiceSummary;
- (BOOL)hasDebugServerLatencyMs;
- (BOOL)hasEtaServiceSummary;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(BOOL)arg1;

@end
