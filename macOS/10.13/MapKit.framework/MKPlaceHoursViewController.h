/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    NSArray * _completeHours;
    NSString * _currentOpeningString;
    NSMutableDictionary * _formattedData;
    MKPlaceSectionHeaderView * _headerView;
    BOOL  _isExpanded;
    MKMapItem * _mapItem;
    BOOL  _resizableViewsDisabled;
}

@property (nonatomic, readwrite) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) NSArray *completeHours;
@property (nonatomic, readonly) NSString *currentOpeningString;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite, retain) MKMapItem *mapItem;
@property (nonatomic, readwrite) BOOL resizableViewsDisabled;
@property (atomic, readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)placeHoursWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setExpanded:(BOOL)arg1;
- (BOOL)_shouldOnlyShowExpanded;
- (void)_toggleShowAllHours;
- (void)_updateHoursAnimated:(BOOL)arg1;
- (id)analyticsDelegate;
- (void)calculateWidthsForData:(id)arg1;
- (id)completeHours;
- (id)currentOpeningString;
- (id)formattedData;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (BOOL)resizableViewsDisabled;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(BOOL)arg1;
- (id)timeZone;
- (id)titleString;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end