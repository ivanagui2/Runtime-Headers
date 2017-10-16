/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSCheapMutableString : NSMutableString {
    void * _reserved;
    union { 
        unsigned short *fat; 
        char *thin; 
    }  contents;
    struct { 
        unsigned int isFat : 1; 
        unsigned int freeWhenDone : 1; 
        unsigned int refs : 30; 
    }  flags;
    unsigned long long  numCharacters;
}

- (const char *)cString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6 remainingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg7;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (const char *)lossyCString;
- (void)setContentsNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;

@end