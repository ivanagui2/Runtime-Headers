/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {
    unsigned int  _displayDepartureFrequency;
    unsigned int  _earliestDepartureTime;
    struct { 
        unsigned int displayDepartureFrequency : 1; 
        unsigned int earliestDepartureTime : 1; 
        unsigned int latestDepartureTime : 1; 
        unsigned int maxDepartureFrequency : 1; 
        unsigned int minDepartureFrequency : 1; 
        unsigned int isEstimated : 1; 
    }  _has;
    BOOL  _isEstimated;
    unsigned int  _latestDepartureTime;
    unsigned int  _maxDepartureFrequency;
    unsigned int  _minDepartureFrequency;
    PBUnknownFields * _unknownFields;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (nonatomic, readwrite) unsigned int displayDepartureFrequency;
@property (nonatomic, readonly) long long displayFrequency;
@property (nonatomic, readwrite) unsigned int earliestDepartureTime;
@property (nonatomic, readonly) NSDate *firstTimeInFrequency;
@property (nonatomic, readonly) double frequencyForSorting;
@property (nonatomic, readonly) long long frequencyType;
@property (nonatomic, readwrite) BOOL hasDisplayDepartureFrequency;
@property (nonatomic, readwrite) BOOL hasEarliestDepartureTime;
@property (nonatomic, readwrite) BOOL hasIsEstimated;
@property (nonatomic, readwrite) BOOL hasLatestDepartureTime;
@property (nonatomic, readwrite) BOOL hasMaxDepartureFrequency;
@property (nonatomic, readwrite) BOOL hasMinDepartureFrequency;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) BOOL isEstimate;
@property (nonatomic, readwrite) BOOL isEstimated;
@property (nonatomic, readonly) NSDate *lastTimeInFrequency;
@property (nonatomic, readwrite) unsigned int latestDepartureTime;
@property (nonatomic, readwrite) unsigned int maxDepartureFrequency;
@property (nonatomic, readonly) long long maxFrequency;
@property (nonatomic, readwrite) unsigned int minDepartureFrequency;
@property (nonatomic, readonly) long long minFrequency;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)displayDepartureFrequency;
- (unsigned int)earliestDepartureTime;
- (BOOL)hasDisplayDepartureFrequency;
- (BOOL)hasEarliestDepartureTime;
- (BOOL)hasIsEstimated;
- (BOOL)hasLatestDepartureTime;
- (BOOL)hasMaxDepartureFrequency;
- (BOOL)hasMinDepartureFrequency;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEstimated;
- (unsigned int)latestDepartureTime;
- (unsigned int)maxDepartureFrequency;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minDepartureFrequency;
- (BOOL)readFrom:(id)arg1;
- (void)setDisplayDepartureFrequency:(unsigned int)arg1;
- (void)setEarliestDepartureTime:(unsigned int)arg1;
- (void)setHasDisplayDepartureFrequency:(BOOL)arg1;
- (void)setHasEarliestDepartureTime:(BOOL)arg1;
- (void)setHasIsEstimated:(BOOL)arg1;
- (void)setHasLatestDepartureTime:(BOOL)arg1;
- (void)setHasMaxDepartureFrequency:(BOOL)arg1;
- (void)setHasMinDepartureFrequency:(BOOL)arg1;
- (void)setIsEstimated:(BOOL)arg1;
- (void)setLatestDepartureTime:(unsigned int)arg1;
- (void)setMaxDepartureFrequency:(unsigned int)arg1;
- (void)setMinDepartureFrequency:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

// GEOPDDepartureFrequency (GEOTransitExtrasInternal)

- (long long)displayFrequency;
- (id)firstTimeInFrequency;
- (double)frequencyForSorting;
- (long long)frequencyType;
- (BOOL)isEstimate;
- (BOOL)isValidAtDate:(id)arg1;
- (id)lastTimeInFrequency;
- (long long)maxFrequency;
- (long long)minFrequency;

@end