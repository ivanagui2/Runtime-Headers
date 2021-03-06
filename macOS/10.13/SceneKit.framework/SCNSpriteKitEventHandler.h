/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
 */

@interface SCNSpriteKitEventHandler : NSObject {
    BOOL  _mouseIsDown;
    BOOL  _rightMouseIsDown;
    SKScene * _scene;
    NSMutableDictionary * _touchMap;
}

@property (nonatomic, readwrite, retain) SKScene *scene;

- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)init;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseMoved:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (void)pressureChangeWithEvent:(id)arg1;
- (BOOL)rightMouseDown:(id)arg1;
- (BOOL)rightMouseDragged:(id)arg1;
- (BOOL)rightMouseUp:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;

@end
