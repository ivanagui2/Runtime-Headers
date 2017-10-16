/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
 */

@interface GEOTrafficBannerText : PBCodable <NSCopying> {
    GEOFormattedString * _bannerLargeText;
    GEOFormattedString * _bannerSmallText;
    int  _bannerStyle;
    BOOL  _disableFasterRerouteByDefault;
    struct { 
        unsigned int bannerStyle : 1; 
        unsigned int hideAtDistance : 1; 
        unsigned int incidentDistance : 1; 
        unsigned int incidentIndex : 1; 
        unsigned int previousBannerChange : 1; 
        unsigned int secondsSaved : 1; 
        unsigned int showAtDistance : 1; 
        unsigned int disableFasterRerouteByDefault : 1; 
    }  _has;
    unsigned int  _hideAtDistance;
    unsigned int  _incidentDistance;
    unsigned int  _incidentIndex;
    NSMutableArray * _localizedIncidentBanners;
    NSMutableArray * _localizedIncidentSpokenTexts;
    NSMutableArray * _localizedIncidentSubBanners;
    int  _previousBannerChange;
    unsigned int  _secondsSaved;
    unsigned int  _showAtDistance;
    GEOFormattedString * _spokenPrompt;
}

@property (nonatomic, readwrite, retain) GEOFormattedString *bannerLargeText;
@property (nonatomic, readwrite, retain) GEOFormattedString *bannerSmallText;
@property (nonatomic, readwrite) int bannerStyle;
@property (nonatomic, readwrite) BOOL disableFasterRerouteByDefault;
@property (nonatomic, readonly) BOOL hasBannerLargeText;
@property (nonatomic, readonly) BOOL hasBannerSmallText;
@property (nonatomic, readwrite) BOOL hasBannerStyle;
@property (nonatomic, readwrite) BOOL hasDisableFasterRerouteByDefault;
@property (nonatomic, readwrite) BOOL hasHideAtDistance;
@property (nonatomic, readwrite) BOOL hasIncidentDistance;
@property (nonatomic, readwrite) BOOL hasIncidentIndex;
@property (nonatomic, readwrite) BOOL hasPreviousBannerChange;
@property (nonatomic, readwrite) BOOL hasSecondsSaved;
@property (nonatomic, readwrite) BOOL hasShowAtDistance;
@property (nonatomic, readonly) BOOL hasSpokenPrompt;
@property (nonatomic, readwrite) unsigned int hideAtDistance;
@property (nonatomic, readwrite) unsigned int incidentDistance;
@property (nonatomic, readwrite) unsigned int incidentIndex;
@property (nonatomic, readwrite, retain) NSMutableArray *localizedIncidentBanners;
@property (nonatomic, readwrite, retain) NSMutableArray *localizedIncidentSpokenTexts;
@property (nonatomic, readwrite, retain) NSMutableArray *localizedIncidentSubBanners;
@property (nonatomic, readwrite) int previousBannerChange;
@property (nonatomic, readwrite) unsigned int secondsSaved;
@property (nonatomic, readwrite) unsigned int showAtDistance;
@property (nonatomic, readwrite, retain) GEOFormattedString *spokenPrompt;

+ (Class)localizedIncidentBannerType;
+ (Class)localizedIncidentSpokenTextType;
+ (Class)localizedIncidentSubBannerType;

- (void).cxx_destruct;
- (int)StringAsBannerStyle:(id)arg1;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (id)bannerLargeText;
- (id)bannerSmallText;
- (int)bannerStyle;
- (id)bannerStyleAsString:(int)arg1;
- (void)clearLocalizedIncidentBanners;
- (void)clearLocalizedIncidentSpokenTexts;
- (void)clearLocalizedIncidentSubBanners;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)disableFasterRerouteByDefault;
- (BOOL)hasBannerLargeText;
- (BOOL)hasBannerSmallText;
- (BOOL)hasBannerStyle;
- (BOOL)hasDisableFasterRerouteByDefault;
- (BOOL)hasHideAtDistance;
- (BOOL)hasIncidentDistance;
- (BOOL)hasIncidentIndex;
- (BOOL)hasPreviousBannerChange;
- (BOOL)hasSecondsSaved;
- (BOOL)hasShowAtDistance;
- (BOOL)hasSpokenPrompt;
- (unsigned long long)hash;
- (unsigned int)hideAtDistance;
- (unsigned int)incidentDistance;
- (unsigned int)incidentIndex;
- (BOOL)isEqual:(id)arg1;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentBanners;
- (unsigned long long)localizedIncidentBannersCount;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSpokenTexts;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSubBanners;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)mergeFrom:(id)arg1;
- (int)previousBannerChange;
- (id)previousBannerChangeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)secondsSaved;
- (void)setBannerLargeText:(id)arg1;
- (void)setBannerSmallText:(id)arg1;
- (void)setBannerStyle:(int)arg1;
- (void)setDisableFasterRerouteByDefault:(BOOL)arg1;
- (void)setHasBannerStyle:(BOOL)arg1;
- (void)setHasDisableFasterRerouteByDefault:(BOOL)arg1;
- (void)setHasHideAtDistance:(BOOL)arg1;
- (void)setHasIncidentDistance:(BOOL)arg1;
- (void)setHasIncidentIndex:(BOOL)arg1;
- (void)setHasPreviousBannerChange:(BOOL)arg1;
- (void)setHasSecondsSaved:(BOOL)arg1;
- (void)setHasShowAtDistance:(BOOL)arg1;
- (void)setHideAtDistance:(unsigned int)arg1;
- (void)setIncidentDistance:(unsigned int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setLocalizedIncidentBanners:(id)arg1;
- (void)setLocalizedIncidentSpokenTexts:(id)arg1;
- (void)setLocalizedIncidentSubBanners:(id)arg1;
- (void)setPreviousBannerChange:(int)arg1;
- (void)setSecondsSaved:(unsigned int)arg1;
- (void)setShowAtDistance:(unsigned int)arg1;
- (void)setSpokenPrompt:(id)arg1;
- (unsigned int)showAtDistance;
- (id)spokenPrompt;
- (void)writeTo:(id)arg1;

@end