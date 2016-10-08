/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
 */

@interface NSFileSpecifier : NSObject <NSCopying> {
    struct FSRef { 
        unsigned char hidden[80]; 
    }  _ref;
}

+ (id)specifierWithPath:(id)arg1 traverseLink:(BOOL)arg2;
+ (id)specifierWithURL:(id)arg1 traverseLink:(BOOL)arg2;

- (const struct FSRef { unsigned char x1[80]; }*)asRef;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithParentSpecifier:(id)arg1 name:(id)arg2;
- (id)initWithPath:(id)arg1 traverseLink:(BOOL)arg2;
- (id)initWithRef:(const struct FSRef { unsigned char x1[80]; }*)arg1;
- (id)initWithURL:(id)arg1 traverseLink:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)parentSpecifier;
- (id)path;
- (id)presentableName;

@end