/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
 */

@interface CNVCardEncoding : NSObject {
    NSString * _name;
    unsigned long long  _stringEncoding;
}

@property (atomic, readonly) NSString *name;
@property (atomic, readonly) unsigned long long stringEncoding;

+ (id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2;
+ (id)asciiEncoding;
+ (id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;
+ (id)encodingsFromUserDefaults;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)makeStandardEncodings;
+ (id)preferredEncodingInUserDefaults;
+ (id)standardEncodings;
+ (id)utf8Encoding;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2;
- (id)name;
- (unsigned long long)stringEncoding;

@end