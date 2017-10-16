/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest {
    id  _dealHandler;
}

@property (nonatomic, readwrite, copy) id dealHandler;

+ (id)requestWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (id)dealHandler;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (void)setDealHandler:(id)arg1;
- (id)url;
- (id)urlRequest;

@end