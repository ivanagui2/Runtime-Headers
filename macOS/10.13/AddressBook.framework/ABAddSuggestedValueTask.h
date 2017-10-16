/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAddSuggestedValueTask : ABTask {
    ABPerson * _person;
    NSString * _property;
    id  _value;
}

@property (atomic, readwrite, retain) ABPerson *person;
@property (atomic, readwrite, retain) NSString *property;
@property (atomic, readwrite, retain) id value;

- (void)dealloc;
- (id)firstAvailableLabelGivenCurrentLabels:(id)arg1;
- (id)getOrMakeMultivalue;
- (id)initWithName:(id)arg1 person:(id)arg2 property:(id)arg3 value:(id)arg4;
- (id)multiValueByAddingSuggestedValue;
- (id)person;
- (id)property;
- (id)run:(id*)arg1;
- (void)setPerson:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end