/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOAlert : PBCodable <NSCopying> {
    NSString * _content;
    NSString * _title;
}

@property (nonatomic, readwrite, retain) NSString *content;
@property (nonatomic, readonly) BOOL hasContent;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readwrite, retain) NSString *title;

- (void).cxx_destruct;
- (id)content;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasContent;
- (BOOL)hasTitle;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
