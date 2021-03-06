/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebKitLegacy.framework/Versions/A/WebKitLegacy
 */

@interface DOMCharacterData : DOMNode

@property (atomic, readwrite, copy) NSString *data;
@property (atomic, readonly) unsigned int length;

- (void)appendData:(id)arg1;
- (id)data;
- (void)deleteData:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 data:(id)arg2;
- (unsigned int)length;
- (id)nextElementSibling;
- (id)previousElementSibling;
- (void)remove;
- (void)replaceData:(unsigned int)arg1 length:(unsigned int)arg2 data:(id)arg3;
- (void)setData:(id)arg1;
- (id)substringData:(unsigned int)arg1 length:(unsigned int)arg2;

// DOMCharacterData (DOMCharacterDataDeprecated)

- (void)deleteData:(unsigned int)arg1 :(unsigned int)arg2;
- (void)insertData:(unsigned int)arg1 :(id)arg2;
- (void)replaceData:(unsigned int)arg1 :(unsigned int)arg2 :(id)arg3;
- (id)substringData:(unsigned int)arg1 :(unsigned int)arg2;

@end
