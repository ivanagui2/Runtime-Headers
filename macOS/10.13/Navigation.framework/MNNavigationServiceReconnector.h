/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNNavigationServiceReconnector : NSObject {
    <MNNavigationServiceReconnectorDelegate> * _delegate;
    MNRoutePlanningDetails * _routePlanningDetails;
}

@property (nonatomic, readwrite) <MNNavigationServiceReconnectorDelegate> *delegate;

- (void).cxx_destruct;
- (BOOL)_isValidRoutePlanningDetails:(id)arg1;
- (id)delegate;
- (void)finishReconnecting;
- (id)initWithRoutePlanningDetails:(id)arg1;
- (BOOL)isReconnecting;
- (BOOL)reconnect;
- (void)setDelegate:(id)arg1;

@end
