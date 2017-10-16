/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSAppleEventHandling : NSObject {
    NSAppleEventDescriptor * _event;
    BOOL  _isSuspendedWithAE;
    BOOL  _padding;
    NSAppleEventDescriptor * _replyEvent;
    NSScriptCommand * _scriptCommand;
}

- (void)dealloc;
- (id)event;
- (id)initWithEvent:(const struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg1 replyEvent:(struct AEDesc { unsigned int x1; struct OpaqueAEDataStorageType {} **x2; }*)arg2;
- (id)replyEvent;
- (void)resumeWithScriptCommandResult:(id)arg1;
- (id)scriptCommand;
- (void)setScriptCommand:(id)arg1;
- (void)suspend;

@end