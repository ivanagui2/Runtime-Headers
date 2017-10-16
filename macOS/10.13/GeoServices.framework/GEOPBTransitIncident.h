/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPBTransitIncident : PBCodable <NSCopying> {
    NSMutableArray * _affectedEntitys;
    BOOL  _blocking;
    unsigned int  _creationDatetime;
    unsigned int  _endDatetime;
    struct { 
        unsigned int incidentMuid : 1; 
        unsigned int creationDatetime : 1; 
        unsigned int endDatetime : 1; 
        unsigned int iconEnum : 1; 
        unsigned int incidentIndex : 1; 
        unsigned int startDatetime : 1; 
        unsigned int updatedDatetime : 1; 
        unsigned int blocking : 1; 
    }  _has;
    int  _iconEnum;
    unsigned int  _incidentIndex;
    unsigned long long  _incidentMuid;
    GEOPBTransitArtwork * _incidentTypeArtwork;
    NSString * _longDescriptionString;
    NSString * _messageForAllBlocking;
    NSString * _messageForIncidentType;
    NSString * _messageString;
    NSString * _shortDescriptionString;
    unsigned int  _startDatetime;
    NSString * _titleString;
    PBUnknownFields * _unknownFields;
    unsigned int  _updatedDatetime;
}

@property (nonatomic, readwrite, retain) NSMutableArray *affectedEntitys;
@property (nonatomic, readwrite) BOOL blocking;
@property (nonatomic, readwrite) unsigned int creationDatetime;
@property (nonatomic, readwrite) unsigned int endDatetime;
@property (nonatomic, readwrite) BOOL hasBlocking;
@property (nonatomic, readwrite) BOOL hasCreationDatetime;
@property (nonatomic, readwrite) BOOL hasEndDatetime;
@property (nonatomic, readwrite) BOOL hasIconEnum;
@property (nonatomic, readwrite) BOOL hasIncidentIndex;
@property (nonatomic, readwrite) BOOL hasIncidentMuid;
@property (nonatomic, readonly) BOOL hasIncidentTypeArtwork;
@property (nonatomic, readonly) BOOL hasLongDescriptionString;
@property (nonatomic, readonly) BOOL hasMessageForAllBlocking;
@property (nonatomic, readonly) BOOL hasMessageForIncidentType;
@property (nonatomic, readonly) BOOL hasMessageString;
@property (nonatomic, readonly) BOOL hasShortDescriptionString;
@property (nonatomic, readwrite) BOOL hasStartDatetime;
@property (nonatomic, readonly) BOOL hasTitleString;
@property (nonatomic, readwrite) BOOL hasUpdatedDatetime;
@property (nonatomic, readwrite) int iconEnum;
@property (nonatomic, readwrite) unsigned int incidentIndex;
@property (nonatomic, readwrite) unsigned long long incidentMuid;
@property (nonatomic, readwrite, retain) GEOPBTransitArtwork *incidentTypeArtwork;
@property (nonatomic, readwrite, retain) NSString *longDescriptionString;
@property (nonatomic, readwrite, retain) NSString *messageForAllBlocking;
@property (nonatomic, readwrite, retain) NSString *messageForIncidentType;
@property (nonatomic, readwrite, retain) NSString *messageString;
@property (nonatomic, readwrite, retain) NSString *shortDescriptionString;
@property (nonatomic, readwrite) unsigned int startDatetime;
@property (nonatomic, readwrite, retain) NSString *titleString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, readwrite) unsigned int updatedDatetime;

+ (Class)affectedEntityType;

- (void).cxx_destruct;
- (int)StringAsIconEnum:(id)arg1;
- (void)addAffectedEntity:(id)arg1;
- (id)affectedEntityAtIndex:(unsigned long long)arg1;
- (id)affectedEntitys;
- (unsigned long long)affectedEntitysCount;
- (BOOL)blocking;
- (void)clearAffectedEntitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)creationDatetime;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endDatetime;
- (BOOL)hasBlocking;
- (BOOL)hasCreationDatetime;
- (BOOL)hasEndDatetime;
- (BOOL)hasIconEnum;
- (BOOL)hasIncidentIndex;
- (BOOL)hasIncidentMuid;
- (BOOL)hasIncidentTypeArtwork;
- (BOOL)hasLongDescriptionString;
- (BOOL)hasMessageForAllBlocking;
- (BOOL)hasMessageForIncidentType;
- (BOOL)hasMessageString;
- (BOOL)hasShortDescriptionString;
- (BOOL)hasStartDatetime;
- (BOOL)hasTitleString;
- (BOOL)hasUpdatedDatetime;
- (unsigned long long)hash;
- (int)iconEnum;
- (id)iconEnumAsString:(int)arg1;
- (unsigned int)incidentIndex;
- (unsigned long long)incidentMuid;
- (id)incidentTypeArtwork;
- (BOOL)isEqual:(id)arg1;
- (id)longDescriptionString;
- (void)mergeFrom:(id)arg1;
- (id)messageForAllBlocking;
- (id)messageForIncidentType;
- (id)messageString;
- (BOOL)readFrom:(id)arg1;
- (void)setAffectedEntitys:(id)arg1;
- (void)setBlocking:(BOOL)arg1;
- (void)setCreationDatetime:(unsigned int)arg1;
- (void)setEndDatetime:(unsigned int)arg1;
- (void)setHasBlocking:(BOOL)arg1;
- (void)setHasCreationDatetime:(BOOL)arg1;
- (void)setHasEndDatetime:(BOOL)arg1;
- (void)setHasIconEnum:(BOOL)arg1;
- (void)setHasIncidentIndex:(BOOL)arg1;
- (void)setHasIncidentMuid:(BOOL)arg1;
- (void)setHasStartDatetime:(BOOL)arg1;
- (void)setHasUpdatedDatetime:(BOOL)arg1;
- (void)setIconEnum:(int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setIncidentMuid:(unsigned long long)arg1;
- (void)setIncidentTypeArtwork:(id)arg1;
- (void)setLongDescriptionString:(id)arg1;
- (void)setMessageForAllBlocking:(id)arg1;
- (void)setMessageForIncidentType:(id)arg1;
- (void)setMessageString:(id)arg1;
- (void)setShortDescriptionString:(id)arg1;
- (void)setStartDatetime:(unsigned int)arg1;
- (void)setTitleString:(id)arg1;
- (void)setUpdatedDatetime:(unsigned int)arg1;
- (id)shortDescriptionString;
- (unsigned int)startDatetime;
- (id)titleString;
- (id)unknownFields;
- (unsigned int)updatedDatetime;
- (void)writeTo:(id)arg1;

@end