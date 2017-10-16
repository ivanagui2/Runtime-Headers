/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QTKit.framework/Versions/A/QTKit
 */

@interface QTStreamEnumerator : NSEnumerator {
    unsigned int  _index;
    long long  _reserved1;
    long long  _reserved2;
    long long  _reserved3;
    QTTrack * _track;
}

+ (id)streamEnumeratorWithTrack:(id)arg1;

- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (id)nextObject;

// QTStreamEnumerator (QTStreamEnumerator_Private)

- (void)setTrack:(id)arg1;

@end