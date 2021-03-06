/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int  _contextLock;
    struct { id x1; void x2; } * _regexContext;
}

- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;
- (void)dealloc;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end
