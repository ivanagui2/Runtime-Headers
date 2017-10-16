/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNTraceBookmark : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSData * _imageData;
    double  _timestamp;
}

@property (nonatomic, readonly) BOOL hasImageData;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite, retain) NSData *imageData;
@property (nonatomic, readwrite) double timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasImageData;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (id)imageData;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setImageData:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end