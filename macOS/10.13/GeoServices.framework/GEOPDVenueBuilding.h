/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOPDVenueBuilding : PBCodable <NSCopying> {
    unsigned long long  _buildingId;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _directoryGroupingIds;
    struct { 
        unsigned int buildingId : 1; 
        unsigned int muid : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _levelIds;
    unsigned long long  _muid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readwrite) unsigned long long buildingId;
@property (nonatomic, readonly) unsigned long long*directoryGroupingIds;
@property (nonatomic, readonly) unsigned long long directoryGroupingIdsCount;
@property (nonatomic, readwrite) BOOL hasBuildingId;
@property (nonatomic, readonly) BOOL hasLabel;
@property (nonatomic, readwrite) BOOL hasMuid;
@property (nonatomic, readwrite, retain) GEOPDVenueLabel *label;
@property (nonatomic, readonly) unsigned long long*levelIds;
@property (nonatomic, readonly) unsigned long long levelIdsCount;
@property (nonatomic, readwrite) unsigned long long muid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addDirectoryGroupingId:(unsigned long long)arg1;
- (void)addLevelId:(unsigned long long)arg1;
- (unsigned long long)buildingId;
- (void)clearDirectoryGroupingIds;
- (void)clearLevelIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)directoryGroupingIds;
- (unsigned long long)directoryGroupingIdsCount;
- (BOOL)hasBuildingId;
- (BOOL)hasLabel;
- (BOOL)hasMuid;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)levelIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)levelIds;
- (unsigned long long)levelIdsCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (BOOL)readFrom:(id)arg1;
- (void)setBuildingId:(unsigned long long)arg1;
- (void)setDirectoryGroupingIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setHasBuildingId:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLevelIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setMuid:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
