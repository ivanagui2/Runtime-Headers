/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDExternalTransitLookupParameters : PBCodable <NSCopying> {
    NSMutableArray * _externalTransitStationCodes;
    struct { 
        unsigned int transactionTimestamp : 1; 
    }  _has;
    NSString * _sourceId;
    GEOLocation * _transactionLocation;
    double  _transactionTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite, retain) NSMutableArray *externalTransitStationCodes;
@property (nonatomic, readonly) BOOL hasSourceId;
@property (nonatomic, readonly) BOOL hasTransactionLocation;
@property (nonatomic, readwrite) BOOL hasTransactionTimestamp;
@property (nonatomic, readwrite, retain) NSString *sourceId;
@property (nonatomic, readwrite, retain) GEOLocation *transactionLocation;
@property (nonatomic, readwrite) double transactionTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)externalTransitStationCodeType;

- (void).cxx_destruct;
- (void)addExternalTransitStationCode:(id)arg1;
- (void)clearExternalTransitStationCodes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalTransitStationCodeAtIndex:(unsigned long long)arg1;
- (id)externalTransitStationCodes;
- (unsigned long long)externalTransitStationCodesCount;
- (BOOL)hasSourceId;
- (BOOL)hasTransactionLocation;
- (BOOL)hasTransactionTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExternalTransitStationCodes:(id)arg1;
- (void)setHasTransactionTimestamp:(BOOL)arg1;
- (void)setSourceId:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (id)sourceId;
- (id)transactionLocation;
- (double)transactionTimestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
