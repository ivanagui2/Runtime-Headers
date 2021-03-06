/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFindPattern : NSObject <NSCoding, NSCopying> {
    BOOL  allowsBackreferences;
    int  captureGroupID;
    NSString * displayString;
    int  groupID;
    NSString * regularExpression;
    int  repeatedPatternID;
    NSString * replacementString;
    NSString * tokenString;
    NSString * uniqueID;
}

@property (atomic, readwrite) BOOL allowsBackreferences;
@property (atomic, readwrite) int captureGroupID;
@property (atomic, readwrite, copy) NSString *displayString;
@property (atomic, readwrite) int groupID;
@property (atomic, readwrite, copy) NSString *regularExpression;
@property (atomic, readwrite) int repeatedPatternID;
@property (atomic, readwrite, copy) NSString *replacementString;
@property (atomic, readwrite, copy) NSString *tokenString;
@property (atomic, readonly) NSString *uniqueID;

+ (id)placeholderFindPattern;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;

- (void)_setUniqueID:(id)arg1;
- (BOOL)allowsBackreferences;
- (id)backreferenceExpression;
- (int)captureGroupID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (void)generateNewUniqueID;
- (int)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)propertyListRepresentation;
- (id)regularExpression;
- (int)repeatedPatternID;
- (id)replaceExpression;
- (id)replacementString;
- (void)setAllowsBackreferences:(BOOL)arg1;
- (void)setCaptureGroupID:(int)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setGroupID:(int)arg1;
- (void)setRegularExpression:(id)arg1;
- (void)setRepeatedPatternID:(int)arg1;
- (void)setReplacementString:(id)arg1;
- (void)setTokenString:(id)arg1;
- (id)tokenString;
- (id)uniqueID;
- (id)writableTypesForPasteboard:(id)arg1;

@end
