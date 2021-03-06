/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRLyricsEventProtobuf : PBCodable <NSCopying> {
    double  _endTime;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
    }  _has;
    double  _startTime;
    _MRLyricsTokenProtobuf * _token;
}

@property (nonatomic, readwrite) double endTime;
@property (nonatomic, readwrite) BOOL hasEndTime;
@property (nonatomic, readwrite) BOOL hasStartTime;
@property (nonatomic, readonly) BOOL hasToken;
@property (nonatomic, readwrite) double startTime;
@property (nonatomic, readwrite, retain) _MRLyricsTokenProtobuf *token;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endTime;
- (BOOL)hasEndTime;
- (BOOL)hasStartTime;
- (BOOL)hasToken;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setHasEndTime:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setStartTime:(double)arg1;
- (void)setToken:(id)arg1;
- (double)startTime;
- (id)token;
- (void)writeTo:(id)arg1;

@end
