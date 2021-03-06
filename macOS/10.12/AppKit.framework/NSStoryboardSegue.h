/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSStoryboardSegue : NSObject {
    id  _destinationController;
    NSString * _identifier;
    id  _performHandler;
    id  _prepareHandler;
    id  _sourceController;
}

@property (atomic, readonly) id destinationController;
@property (atomic, readonly, copy) NSString *identifier;
@property (atomic, readwrite, copy) id performHandler;
@property (atomic, readwrite, copy) id prepareHandler;
@property (atomic, readonly) id sourceController;

+ (id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(id)arg4;

- (void)_prepare;
- (void)dealloc;
- (id)description;
- (id)destinationController;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (void)perform;
- (id)performHandler;
- (id)prepareHandler;
- (void)setPerformHandler:(id)arg1;
- (void)setPrepareHandler:(id)arg1;
- (id)sourceController;

@end
