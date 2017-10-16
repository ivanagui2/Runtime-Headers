/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKURLSchemeTaskImpl : NSObject <WKObject, WKURLSchemeTaskPrivate> {
    struct ObjectStorage<API::URLSchemeTask> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _urlSchemeTask;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURLRequest *request;
@property (atomic, readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)_didPerformRedirection:(id)arg1 newRequest:(id)arg2;
- (void)dealloc;
- (void)didFailWithError:(id)arg1;
- (void)didFinish;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (id)request;

@end