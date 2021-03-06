/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKTransitLineIncidentsViewController : _MKTableViewController <MKDynamicTransitUIContainer> {
    MKTransitItemIncidentsController * _incidentsController;
    <MKTransitLineIncidentsViewControllerDelegate> * _incidentsDelegate;
    <GEOTransitLineItem> * _lineItem;
    NSDate * _referenceDate;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readwrite) <MKTransitLineIncidentsViewControllerDelegate> *incidentsDelegate;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
@property (nonatomic, readonly, copy) NSDate *referenceDate;
@property (atomic, readonly) Class superclass;

- (void).cxx_destruct;
- (id)_incidentCellForRow:(long long)arg1;
- (id)_incidents;
- (id)incidentsDelegate;
- (id)initWithLineItem:(id)arg1;
- (id)lineItem;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)referenceDate;
- (BOOL)requiresPreferredContentSizeInStackingView;
- (void)setIncidentsDelegate:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)transitUIReferenceTimeUpdated:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
