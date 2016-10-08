/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
 */

@interface DDConcatenationRegexp : DDOperatorRegexp

- (BOOL)acceptEmptyWordWithManager:(id)arg1;
- (void)appendDescriptionToString:(id)arg1 depth:(int)arg2;
- (id)prettyPrintWithPriority:(int)arg1;

// DDConcatenationRegexp (ASTConversion)

- (id)symbolsInGrammar:(id)arg1 container:(id)arg2 withManager:(id)arg3;

// DDConcatenationRegexp (DDASTToICU)

+ (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 argument:(id)arg4 repeatCount:(unsigned int)arg5;
+ (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3 arguments:(id)arg4;

- (void)appendToDescription:(id)arg1 priority:(int)arg2 withManager:(id)arg3;

// DDConcatenationRegexp (TypeBuilder)

- (id)computeTypeFromParent:(id)arg1 withManager:(id)arg2;

// DDConcatenationRegexp (XMLOutput)

- (id)monElement;

@end