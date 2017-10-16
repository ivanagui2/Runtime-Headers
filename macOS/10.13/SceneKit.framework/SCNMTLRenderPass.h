/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNMTLRenderPass : NSObject {
    id  executeBlock;
    id  setupBlock;
}

@property (nonatomic, readwrite, copy) id executeBlock;
@property (nonatomic, readwrite, copy) id setupBlock;

- (void)dealloc;
- (void)execute:(id)arg1;
- (id)executeBlock;
- (void)setExecuteBlock:(id)arg1;
- (void)setSetupBlock:(id)arg1;
- (void)setup:(id)arg1;
- (id)setupBlock;

@end