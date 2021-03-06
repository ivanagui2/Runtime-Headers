/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABScriptedCardAction : NSObject <ABActionDelegate> {
    NSString * _actionProperty;
    NSString * _actionPropertyRaw;
    NSURL * _url;
}

@property (atomic, readonly) NSString *actionProperty;

+ (id)actionWithScriptAtURL:(id)arg1;

- (id)actionProperty;
- (id)actionPropertyRaw;
- (void)dealloc;
- (void)executeUserScriptWithRequest:(id)arg1;
- (id)initWithScriptAtURL:(id)arg1;
- (id)parameterValueForPerson:(id)arg1 identifier:(id)arg2;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)requestWithEventID:(unsigned int)arg1;
- (id)requestWithEventID:(unsigned int)arg1 person:(id)arg2 identifier:(id)arg3;
- (id)resultOfExecutingScriptWithRequest:(id)arg1;
- (id)script;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
- (id)userScript;

@end
