/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
 */

@interface _WKUserInitiatedAction : NSObject <WKObject> {
    struct ObjectStorage<API::UserInitiatedAction> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _userInitiatedAction;
}

@property (atomic, readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (getter=isConsumed, nonatomic, readonly) BOOL consumed;
@property (atomic, readonly, copy) NSString *debugDescription;
@property (atomic, readonly, copy) NSString *description;
@property (atomic, readonly) unsigned long long hash;
@property (atomic, readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)consume;
- (void)dealloc;
- (id)description;
- (BOOL)isConsumed;

@end