/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
 */

@interface ABRemoteLabeledValue : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _label;
    <NSCopying><NSSecureCoding> * _value;
}

@property (atomic, readonly) NSString *address;
@property (atomic, readonly) NSString *addressNormalized;
@property (atomic, readonly) NSString *city;
@property (atomic, readonly) NSString *countryCode;
@property (atomic, readonly) NSString *countryName;
@property (atomic, readonly) ABRemoteCustomProperty *customProperty;
@property (atomic, readonly) NSDate *date;
@property (atomic, readonly) NSDate *dateValue;
@property (atomic, readonly) double dateYearless;
@property (atomic, readonly) NSString *fullNumber;
@property (atomic, readwrite, copy) NSString *identifier;
@property (atomic, readwrite, copy) NSString *label;
@property (atomic, readonly) NSString *name;
@property (atomic, readonly) NSString *region;
@property (atomic, readonly) NSString *sama;
@property (atomic, readonly) NSString *state;
@property (atomic, readonly) NSString *street;
@property (atomic, readonly) NSString *stringValue;
@property (atomic, readonly) NSString *uniqueId;
@property (atomic, readwrite, copy) <NSCopying><NSSecureCoding> *value;
@property (atomic, readonly) NSString *zipCode;

// Image: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink

+ (id)labeledValueWithIdentifier:(id)arg1 label:(id)arg2 value:(id)arg3;
+ (id)labeledValueWithLabel:(id)arg1 inArray:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook

// ABRemoteLabeledValue (SearchHelpers)

- (id)address;
- (id)addressNormalized;
- (id)city;
- (id)countryCode;
- (id)countryName;
- (id)customProperty;
- (id)customPropertyValue;
- (id)date;
- (id)dateValue;
- (double)dateYearless;
- (id)dictionaryValue;
- (id)fullNumber;
- (id)name;
- (id)region;
- (id)sama;
- (id)state;
- (id)street;
- (id)stringValue;
- (id)uniqueId;
- (id)valueForKeyPath:(id)arg1;
- (id)zipCode;

@end
