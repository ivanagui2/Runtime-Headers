/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Versions/A/Sharing
 */

@interface AWDSharingContinuityKeyboardResult : PBCodable <NSCopying> {
    unsigned int  _bannerVisibleMs;
    unsigned int  _beginEditingCount;
    unsigned int  _closeAction;
    BOOL  _directInput;
    unsigned int  _endEditingCount;
    BOOL  _externalInput;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bannerVisibleMs : 1; 
        unsigned int beginEditingCount : 1; 
        unsigned int closeAction : 1; 
        unsigned int endEditingCount : 1; 
        unsigned int mainUIVisibleMs : 1; 
        unsigned int openAction : 1; 
        unsigned int directInput : 1; 
        unsigned int externalInput : 1; 
        unsigned int secureInput : 1; 
    }  _has;
    unsigned int  _mainUIVisibleMs;
    unsigned int  _openAction;
    BOOL  _secureInput;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, readwrite) unsigned int bannerVisibleMs;
@property (nonatomic, readwrite) unsigned int beginEditingCount;
@property (nonatomic, readwrite) unsigned int closeAction;
@property (nonatomic, readwrite) BOOL directInput;
@property (nonatomic, readwrite) unsigned int endEditingCount;
@property (nonatomic, readwrite) BOOL externalInput;
@property (nonatomic, readwrite) BOOL hasBannerVisibleMs;
@property (nonatomic, readwrite) BOOL hasBeginEditingCount;
@property (nonatomic, readwrite) BOOL hasCloseAction;
@property (nonatomic, readwrite) BOOL hasDirectInput;
@property (nonatomic, readwrite) BOOL hasEndEditingCount;
@property (nonatomic, readwrite) BOOL hasExternalInput;
@property (nonatomic, readwrite) BOOL hasMainUIVisibleMs;
@property (nonatomic, readwrite) BOOL hasOpenAction;
@property (nonatomic, readwrite) BOOL hasSecureInput;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic, readwrite) BOOL hasTimestamp;
@property (nonatomic, readwrite) unsigned int mainUIVisibleMs;
@property (nonatomic, readwrite) unsigned int openAction;
@property (nonatomic, readwrite) BOOL secureInput;
@property (nonatomic, readwrite, retain) NSString *sessionUUID;
@property (nonatomic, readwrite) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned int)bannerVisibleMs;
- (unsigned int)beginEditingCount;
- (unsigned int)closeAction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)directInput;
- (unsigned int)endEditingCount;
- (BOOL)externalInput;
- (BOOL)hasBannerVisibleMs;
- (BOOL)hasBeginEditingCount;
- (BOOL)hasCloseAction;
- (BOOL)hasDirectInput;
- (BOOL)hasEndEditingCount;
- (BOOL)hasExternalInput;
- (BOOL)hasMainUIVisibleMs;
- (BOOL)hasOpenAction;
- (BOOL)hasSecureInput;
- (BOOL)hasSessionUUID;
- (BOOL)hasTimestamp;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)mainUIVisibleMs;
- (void)mergeFrom:(id)arg1;
- (unsigned int)openAction;
- (BOOL)readFrom:(id)arg1;
- (BOOL)secureInput;
- (id)sessionUUID;
- (void)setBannerVisibleMs:(unsigned int)arg1;
- (void)setBeginEditingCount:(unsigned int)arg1;
- (void)setCloseAction:(unsigned int)arg1;
- (void)setDirectInput:(BOOL)arg1;
- (void)setEndEditingCount:(unsigned int)arg1;
- (void)setExternalInput:(BOOL)arg1;
- (void)setHasBannerVisibleMs:(BOOL)arg1;
- (void)setHasBeginEditingCount:(BOOL)arg1;
- (void)setHasCloseAction:(BOOL)arg1;
- (void)setHasDirectInput:(BOOL)arg1;
- (void)setHasEndEditingCount:(BOOL)arg1;
- (void)setHasExternalInput:(BOOL)arg1;
- (void)setHasMainUIVisibleMs:(BOOL)arg1;
- (void)setHasOpenAction:(BOOL)arg1;
- (void)setHasSecureInput:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMainUIVisibleMs:(unsigned int)arg1;
- (void)setOpenAction:(unsigned int)arg1;
- (void)setSecureInput:(BOOL)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end