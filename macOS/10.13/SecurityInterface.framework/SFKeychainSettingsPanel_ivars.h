/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFKeychainSettingsPanel_ivars : NSObject {
    NSButton * _autoLockCtrl;
    NSStepper * _autoLockStepper;
    SFAutoLockTextValue * _autoLockValue;
    NSButton * _cancelButton;
    void * _clientContextInfo;
    id  _clientDelegate;
    SEL  _clientDidEndSelector;
    NSButton * _dotMacButton;
    NSString * _keychainNameStr;
    struct OpaqueSecKeychainRef { } * _keychainRef;
    unsigned long long  _lockIntervalVal;
    NSButton * _lockOnSleepCtrl;
    BOOL  _lockOnSleepVal;
    NSWindow * _panel;
    NSTextField * _panelMessage;
    NSWindow * _parentWindowForSheet;
    NSProgressIndicator * _progressCtrl;
    BOOL  _runAsSheet;
    NSButton * _saveButton;
    struct SecKeychainSettings { 
        unsigned int version; 
        unsigned char lockOnSleep; 
        unsigned char useLockInterval; 
        unsigned int lockInterval; 
    }  _settings;
    NSButton * _syncDotMacCtrl;
    NSTextField * _syncStateMessage;
    BOOL  _syncVal;
}

- (void)dealloc;

@end
