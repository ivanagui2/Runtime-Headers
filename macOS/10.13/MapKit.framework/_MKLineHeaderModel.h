/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
 */

@interface _MKLineHeaderModel : NSObject {
    id  _colorProvider;
    NSDictionary * _fontAttribute;
    BOOL  _shouldUseEmptyPlaceholder;
    NSMutableArray * _tokens;
}

@property (nonatomic, readwrite, copy) id colorProvider;
@property (nonatomic, readwrite, copy) NSDictionary *fontAttribute;
@property (nonatomic, readwrite) BOOL shouldUseEmptyPlaceholder;

- (void).cxx_destruct;
- (id)_placeCardHeaderSeparatorString;
- (void)addToken:(id)arg1;
- (id)colorProvider;
- (id)contentAttributedString;
- (id)description;
- (id)fontAttribute;
- (id)init;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeToken:(id)arg1;
- (void)setColorProvider:(id)arg1;
- (void)setFontAttribute:(id)arg1;
- (void)setShouldUseEmptyPlaceholder:(BOOL)arg1;
- (BOOL)shouldUseEmptyPlaceholder;

@end
