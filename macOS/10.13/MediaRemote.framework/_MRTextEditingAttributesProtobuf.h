/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {
    _MRTextInputTraitsProtobuf * _inputTraits;
    NSString * _prompt;
    NSString * _title;
}

@property (nonatomic, readonly) BOOL hasInputTraits;
@property (nonatomic, readonly) BOOL hasPrompt;
@property (nonatomic, readonly) BOOL hasTitle;
@property (nonatomic, readwrite, retain) _MRTextInputTraitsProtobuf *inputTraits;
@property (nonatomic, readwrite, retain) NSString *prompt;
@property (nonatomic, readwrite, retain) NSString *title;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasInputTraits;
- (BOOL)hasPrompt;
- (BOOL)hasTitle;
- (unsigned long long)hash;
- (id)inputTraits;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prompt;
- (BOOL)readFrom:(id)arg1;
- (void)setInputTraits:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
