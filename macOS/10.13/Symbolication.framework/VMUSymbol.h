/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
 */

@interface VMUSymbol : NSObject {
    NSString * _name;
    VMUSourceInfo * _sourceInfo;
}

- (void).cxx_destruct;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 address:(unsigned long long)arg2;
- (id)name;
- (id)sourceInfoForAddress:(unsigned long long)arg1;

@end
