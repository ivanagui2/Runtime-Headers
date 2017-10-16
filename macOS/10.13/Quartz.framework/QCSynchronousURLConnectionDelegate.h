/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCSynchronousURLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    BOOL  _allowRedirections;
    BOOL  _done;
    NSError * _error;
    NSURLRequest * _request;
    NSMutableData * _resourceData;
    NSURLResponse * _response;
}

@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)error;
- (id)initWithRequest:(id)arg1 allowRedirections:(BOOL)arg2;
- (id)resourceData;
- (id)response;
- (void)run:(id)arg1;

@end