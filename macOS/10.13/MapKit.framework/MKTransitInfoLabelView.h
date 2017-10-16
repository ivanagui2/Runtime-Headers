/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitInfoLabelView : _MKUILabel {
    MKArtworkDataSourceCache * _artworkCache;
    BOOL  _containsText;
    long long  _iconSize;
    NSArray * _labelItems;
    MKMapItem * _mapItem;
    double  _maxWidth;
    long long  _shieldSize;
    double  _spaceBetweenIcons;
    double  _spaceBetweenShields;
    id  _textForTruncation;
}

@property (nonatomic, readwrite, retain) MKArtworkDataSourceCache *artworkCache;
@property (nonatomic, readonly) BOOL containsText;
@property (nonatomic, readwrite) long long iconSize;
@property (nonatomic, readwrite, copy) NSArray *labelItems;
@property (nonatomic, readwrite, retain) MKMapItem *mapItem;
@property (nonatomic, readwrite) double maxWidth;
@property (nonatomic, readwrite) long long shieldSize;
@property (nonatomic, readwrite) double spaceBetweenIcons;
@property (nonatomic, readwrite) double spaceBetweenShields;
@property (nonatomic, readwrite, copy) id textForTruncation;

- (void).cxx_destruct;
- (id)_generateText;
- (id)_imageForArtworkDataSource:(id)arg1;
- (id)_imageForLabelItem:(id)arg1;
- (id)_imageForShieldDataSource:(id)arg1;
- (void)_setupLabelInfo;
- (id)_stringAttributes;
- (id)artworkCache;
- (BOOL)containsText;
- (void)dealloc;
- (long long)iconSize;
- (id)init;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;
- (id)labelItems;
- (id)mapItem;
- (double)maxWidth;
- (void)setArtworkCache:(id)arg1;
- (void)setIconSize:(long long)arg1;
- (void)setLabelItems:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setShieldSize:(long long)arg1;
- (void)setSpaceBetweenIcons:(double)arg1;
- (void)setSpaceBetweenShields:(double)arg1;
- (void)setTextForTruncation:(id)arg1;
- (long long)shieldSize;
- (double)spaceBetweenIcons;
- (double)spaceBetweenShields;
- (id)textForTruncation;

@end