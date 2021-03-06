/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
 */

@interface NSZipTextReader : NSObject {
    NSZipFileArchive * _archive;
    NSMutableAttributedString * _attrStr;
    NSData * _contentData;
    NSMutableDictionary * _documentAttrs;
    long long  _errorCode;
    long long  _indexingLimit;
    NSData * _opfData;
    NSDictionary * _options;
    NSData * _smilData;
    long long  _thumbnailLimit;
    NSData * _wordData;
    NSData * _xmlData;
}

- (void)_load;
- (void)_loadContentData;
- (void)_loadWordData;
- (void)_loadXMLData;
- (id)attributedString;
- (void)dealloc;
- (id)documentAttributes;
- (id)initWithArchive:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithPath:(id)arg1 options:(id)arg2;
- (void)setMutableAttributedString:(id)arg1;

@end
