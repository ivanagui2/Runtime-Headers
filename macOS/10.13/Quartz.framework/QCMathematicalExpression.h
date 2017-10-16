/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCMathematicalExpression : NSObject {
    void * _interpreter;
}

+ (double)evaluateString:(id)arg1;

- (void)dealloc;
- (double)evaluate;
- (void)finalize;
- (id)init;
- (id)initWithString:(id)arg1 error:(id*)arg2;
- (void)setVariable:(double)arg1 atIndex:(unsigned long long)arg2;
- (double)variableAtIndex:(unsigned long long)arg1;
- (id)variables;

@end