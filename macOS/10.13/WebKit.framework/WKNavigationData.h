/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface WKNavigationData : NSObject <WKObject> {
    struct ObjectStorage<API::NavigationData> { 
        struct type { 
            unsigned char __lx[888]; 
        } data; 
    }  _data;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) NSURL *destinationURL;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) NSURLRequest *originalRequest;
@property (atomic, readonly) NSURLResponse *response;
@property (atomic, readonly) Class superclass;
@property (atomic, readonly) NSString *title;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)destinationURL;
- (id)originalRequest;
- (id)response;
- (id)title;

@end
