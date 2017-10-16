/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
 */

@interface MSVCallback : NSObject {
    id  _block;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readwrite, copy) id block;
@property (nonatomic, readwrite, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readwrite) SEL selector;
@property (nonatomic, readwrite) id target;

+ (id)callbackWithBlock:(id)arg1 queue:(id)arg2;
+ (id)callbackWithSelector:(SEL)arg1 target:(id)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (id)block;
- (void)invoke:(id)arg1;
- (id)queue;
- (SEL)selector;
- (void)setBlock:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end