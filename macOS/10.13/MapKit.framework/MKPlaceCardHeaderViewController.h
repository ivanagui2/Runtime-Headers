/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceCardHeaderViewController : MKPlaceSectionViewController <MKETAProviderObserver, MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, _MKStackViewDelegate> {
    _MKTokenAttributedString * _categoryToken;
    _MKTokenAttributedString * _closedToken;
    NSArray * _constraints;
    BOOL  _constraintsCreated;
    _MKDataHeaderModel * _dataModel;
    <MKPlaceCardHeaderViewControllerDelegate> * _delegate;
    _MKTokenAttributedString * _distanceToken;
    _MKUILabel * _firstLabel;
    _MKTokenAttributedString * _hoursToken;
    BOOL  _isUserLocation;
    MKPlaceSectionRowView * _labelsSectionView;
    unsigned long long  _layout;
    NSLayoutGuide * _leadingGuide;
    <GEOTransitLineItem> * _lineItem;
    MKImageView * _logoImageView;
    NSURL * _logoURL;
    BOOL  _optionSmallScreen;
    <_MKPlaceItem> * _placeItem;
    _MKTokenAttributedString * _priceToken;
    _MKTokenAttributedString * _ratingsToken;
    _MKUILabel * _secondLabel;
    _MKUILabel * _thirdDisplayedLabel;
    _MKUILabel * _thirdLabel;
    _MKUILabel * _titleOnlyLabel;
    MKPlaceSectionRowView * _titleOnlySectionView;
    _MKTokenAttributedString * _titleToken;
    _MKTokenAttributedString * _userLocationToken;
    _MKTokenAttributedString * _venueToken;
    _MKTokenAttributedString * _verifiedToken;
}

@property (nonatomic, readwrite) double contentAlpha;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (nonatomic, readwrite) <MKPlaceCardHeaderViewControllerDelegate> *delegate;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly) <_MKPlaceItem> *placeItem;
@property (atomic, readonly) Class superclass;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (id)_closedNow;
- (void)_commonInit;
- (void)_contentSizeDidChange;
- (void)_createViews;
- (id)_currentTitle;
- (void)_loadLogo;
- (id)_localizedHours;
- (BOOL)_mapItemShouldDisplayDistance:(id)arg1;
- (id)_reviewLabelText;
- (void)_setupDatas;
- (id)_verifiedText;
- (BOOL)_willShowDistance;
- (double)contentAlpha;
- (id)delegate;
- (void)infoCardThemeChanged:(id)arg1;
- (id)initWithLineItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)initWithPlaceItem:(id)arg1 layout:(unsigned long long)arg2;
- (id)lineItem;
- (id)newLabel;
- (id)placeItem;
- (void)setConstraints;
- (void)setContentAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)titleFont;
- (void)updateHeaderTitle;
- (void)updateViews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end