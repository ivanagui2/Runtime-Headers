/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDAtomicRegexp : DDBasicRegexp <NSCopying> {
    BOOL  _caseInsensitive;
    NSString * _displayName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _simplePattern;
    int  _type;
}

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (BOOL)caseInsensitive;
- (void)dealloc;
- (id)displayName;
- (id)initWithAnyChar;
- (id)initWithCharacter:(unsigned short)arg1;
- (id)initWithEmptyString;
- (id)initWithICUPattern:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithSimplePattern:(id)arg1 caseInsensitive:(BOOL)arg2;
- (id)prettyPrintWithPriority:(int)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setCaseInsensitive:(BOOL)arg1;
- (void)setDisplayName:(id)arg1;
- (int)splitRegexpWithDelegate:(id)arg1 owner:(id)arg2;
- (id)stringPattern;
- (int)type;

// DDAtomicRegexp (ASTConversion)

- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;

// DDAtomicRegexp (DDASTCopy)

- (id)copyWithZone:(struct _NSZone { }*)arg1;

// DDAtomicRegexp (DDASTToICU)

- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

// DDAtomicRegexp (XMLOutput)

- (id)monElement;

@end