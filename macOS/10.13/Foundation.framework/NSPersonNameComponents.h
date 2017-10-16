/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {
    id  _private;
}

@property (atomic, readwrite, copy) NSString *familyName;
@property (atomic, readwrite, copy) NSString *givenName;
@property (atomic, readwrite, copy) NSString *middleName;
@property (atomic, readwrite, copy) NSString *namePrefix;
@property (atomic, readwrite, copy) NSString *nameSuffix;
@property (atomic, readwrite, copy) NSString *nickname;
@property (atomic, readwrite, copy) NSPersonNameComponents *phoneticRepresentation;

// Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToComponents:(id)arg1;
- (id)middleName;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nickname;
- (id)phoneticRepresentation;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setPhoneticRepresentation:(id)arg1;

// NSPersonNameComponents (NSPersonNameComponentsInternalAdditions)

+ (id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1;
+ (id)_allComponents;
+ (id)_allProperties;

- (BOOL)_isEmpty;
- (id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1;

// Image: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts

// NSPersonNameComponents (CNContactAdditions)

+ (id)componentsForContact:(id)arg1;
+ (id)descriptorForUsedKeys;
+ (id)keyPathMapping;
+ (id)keyVectorForUsedKeys;

- (void)overrideComponentsInContact:(id)arg1;

@end