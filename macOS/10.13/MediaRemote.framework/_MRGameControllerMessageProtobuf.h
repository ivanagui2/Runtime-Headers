/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
 */

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying> {
    _MRGameControllerButtonsProtobuf * _buttons;
    unsigned long long  _controllerID;
    _MRGameControllerDigitizerProtobuf * _digitizer;
    struct { 
        unsigned int controllerID : 1; 
    }  _has;
    _MRGameControllerMotionProtobuf * _motion;
}

@property (nonatomic, readwrite, retain) _MRGameControllerButtonsProtobuf *buttons;
@property (nonatomic, readwrite) unsigned long long controllerID;
@property (nonatomic, readwrite, retain) _MRGameControllerDigitizerProtobuf *digitizer;
@property (nonatomic, readonly) BOOL hasButtons;
@property (nonatomic, readwrite) BOOL hasControllerID;
@property (nonatomic, readonly) BOOL hasDigitizer;
@property (nonatomic, readonly) BOOL hasMotion;
@property (nonatomic, readwrite, retain) _MRGameControllerMotionProtobuf *motion;

- (id)buttons;
- (unsigned long long)controllerID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)digitizer;
- (BOOL)hasButtons;
- (BOOL)hasControllerID;
- (BOOL)hasDigitizer;
- (BOOL)hasMotion;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)motion;
- (BOOL)readFrom:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setControllerID:(unsigned long long)arg1;
- (void)setDigitizer:(id)arg1;
- (void)setHasControllerID:(BOOL)arg1;
- (void)setMotion:(id)arg1;
- (void)writeTo:(id)arg1;

@end