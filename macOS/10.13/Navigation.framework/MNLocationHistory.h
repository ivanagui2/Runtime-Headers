/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Versions/A/Navigation
 */

@interface MNLocationHistory : NSObject {
    <MNLocationHistoryProvider> * _locationHistoryProvider;
}

@property (atomic, readonly) NSArray *locationHistory;
@property (nonatomic, readwrite, retain) <MNLocationHistoryProvider> *locationHistoryProvider;

- (void).cxx_destruct;
- (id)init;
- (id)locationHistory;
- (id)locationHistoryProvider;
- (void)setLocationHistoryProvider:(id)arg1;

@end