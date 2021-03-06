/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface _NSDictionaryControllerKeyValuePair : NSDictionaryControllerKeyValuePair {
    struct __controllerKeyValuePairFlags { 
        unsigned int _isExplicitlyIncluded : 1; 
        unsigned int _reservedControllerKeyValuePair : 31; 
    }  _controllerKeyValuePairFlags;
    NSDictionaryController * _dictionaryController;
    NSString * _key;
    NSString * _localizedKey;
    id  _value;
}

@property (atomic, readwrite) NSDictionaryController *dictionaryController;

- (id)_init;
- (void)_markAsExplicitlyIncluded:(BOOL)arg1;
- (void)_setKeyWithoutLocalizedKey:(id)arg1;
- (void)_setLocalizedKeyWithoutKey:(id)arg1;
- (void)_setValueWithoutNotification:(id)arg1;
- (void)_setWithoutNotificationLocalizedKey:(id)arg1 key:(id)arg2;
- (BOOL)_validateAnyKey:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)dictionaryController;
- (BOOL)isExplicitlyIncluded;
- (id)key;
- (id)localizedKey;
- (void)setDictionaryController:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setLocalizedKey:(id)arg1;
- (void)setValue:(id)arg1;
- (BOOL)validateKey:(id*)arg1 error:(id*)arg2;
- (BOOL)validateLocalizedKey:(id*)arg1 error:(id*)arg2;
- (BOOL)validateValue:(id*)arg1 error:(id*)arg2;
- (id)value;

@end
