/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface __NSObserver : NSObject {
    id  block;
    NSString * name;
    NSNotificationCenter * nc;
    id  object;
    NSOperationQueue * queue;
}

+ (void)forgetObserver:(id)arg1;
+ (BOOL)isAnObserver:(id)arg1;
+ (id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(id)arg5;

- (void)_doit:(id)arg1;
- (void)dealloc;
- (id)name;
- (id)object;

@end