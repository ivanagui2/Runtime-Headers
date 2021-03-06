/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRTransactionPacketsProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _packets;
}

@property (nonatomic, readwrite, retain) NSMutableArray *packets;

+ (Class)packetsType;

- (void)addPackets:(id)arg1;
- (void)clearPackets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)packets;
- (id)packetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setPackets:(id)arg1;
- (void)writeTo:(id)arg1;

@end
