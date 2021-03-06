/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
 */

@interface AVNowPlayingInfoController : NSObject {
    void * _commandHandlerIdentifier;
    BOOL  _enabled;
    BOOL  _nowPlayingInfoNeedsUpdate;
    AVPlayerController * _playerController;
    id  _playerControllerCurrentTimeJumpedObserver;
    BOOL  _shouldOwnNowPlayingInfo;
}

@property (getter=isEnabled, nonatomic, readwrite) BOOL enabled;
@property (atomic, readwrite, retain) AVPlayerController *playerController;

- (void).cxx_destruct;
- (unsigned int)_handleRemoteCommand:(unsigned int)arg1 options:(id)arg2;
- (BOOL)_ownsNowPlayingInfo;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateNowPlayingInfoTestingOwnership:(BOOL)arg1;
- (void)_updateRegisteredRemoteCommandEnabledStatesWithPlayerController:(id)arg1;
- (void)becomeNowPlayingApp;
- (void)dealloc;
- (id)init;
- (BOOL)isEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (void)setEnabled:(BOOL)arg1;
- (void)setPlayerController:(id)arg1;

@end
