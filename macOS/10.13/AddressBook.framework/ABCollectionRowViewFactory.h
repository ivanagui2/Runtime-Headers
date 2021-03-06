/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCollectionRowViewFactory : NSObject {
    BOOL  _shouldBuildActionGlyphs;
    BOOL  _shouldFormatURLs;
    ABCardViewStyleProvider * _styleProvider;
}

@property (nonatomic, readwrite) BOOL shouldBuildActionGlyphs;
@property (nonatomic, readwrite) BOOL shouldFormatURLs;
@property (nonatomic, readwrite, retain) ABCardViewStyleProvider *styleProvider;

+ (id)infoButtonNamedImageWrapper;

- (void).cxx_destruct;
- (id)accessibilityTitleForGlyphName:(id)arg1;
- (id)alertToneRowViewForItem:(id)arg1;
- (void)applyHuggingAndCompressionSettingsToValueView:(id)arg1;
- (id)buildActionGlyphNamed:(id)arg1;
- (void)buildActionGlyphsForRowView:(id)arg1;
- (void)buildAddRemoveControlsForRowView:(id)arg1;
- (void)buildCommonViewsForRowView:(id)arg1;
- (void)buildFocusRingViewForRowView:(id)arg1;
- (void)buildLabelViewForRowView:(id)arg1;
- (void)buildMessagingServiceViewForRowView:(id)arg1;
- (void)buildNoteValueViewForRowView:(id)arg1;
- (void)buildPreferredNameValueViewForRowView:(id)arg1;
- (void)buildPrivacyCheckboxForRowView:(id)arg1;
- (void)buildSimpleLinkedTextFieldForRowView:(id)arg1;
- (void)buildStackViewForRowView:(id)arg1;
- (void)buildSuggestedGlyphForRowView:(id)arg1;
- (void)buildURLFormattingValueViewForRowView:(id)arg1;
- (void)buildValueViewForRowView:(id)arg1;
- (id)faceTimeRowViewForItem:(id)arg1;
- (id)genericRowViewForItem:(id)arg1;
- (id)glyphNamedImageWrapperWithName:(id)arg1;
- (id)init;
- (id)linkedPeopleRowViewForItem:(id)arg1;
- (id)messagingRowViewForItem:(id)arg1;
- (id)noteRowViewForItem:(id)arg1;
- (id)postalAddressRowViewForItem:(id)arg1;
- (id)preferredNameRowViewForItem:(id)arg1;
- (id)rowViewForItem:(id)arg1;
- (void)setShouldBuildActionGlyphs:(BOOL)arg1;
- (void)setShouldFormatURLs:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldBuildActionGlyphs;
- (BOOL)shouldFormatURLs;
- (id)styleProvider;
- (id)urlRowViewForItem:(id)arg1;

@end
