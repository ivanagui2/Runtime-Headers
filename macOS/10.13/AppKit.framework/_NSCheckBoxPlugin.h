/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSCheckBoxPlugin : _NSValueBinderPlugin {
    struct __checkBoxPluginFlags { 
        unsigned int _allowsMixedState : 1; 
        unsigned int _testedMixedState : 1; 
        unsigned int _reservedCheckBoxPlugin : 30; 
    }  _checkBoxPluginFlags;
}

+ (BOOL)isUsableWithObject:(id)arg1;

- (Class)_valueClass:(id)arg1;
- (BOOL)acceptsMarker:(id)arg1 binding:(id)arg2 overrideWithPlaceholderIfDefined:(BOOL*)arg3;
- (void)connectionWasEstablished:(id)arg1;
- (id)initWithBinder:(id)arg1 object:(id)arg2;
- (BOOL)isBooleanValueBindingForObject:(id)arg1;
- (id)objectMechanismsRequired;
- (BOOL)shouldAlwaysUpdateDisplayValue;
- (void)showValue:(id)arg1 inObject:(id)arg2;
- (id)shownValueInObject:(id)arg1;

@end