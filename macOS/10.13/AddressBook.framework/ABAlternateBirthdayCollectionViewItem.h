/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABAlternateBirthdayCollectionViewItem : ABDateCollectionViewItem

+ (void)markCalendarMenuItemAsNotSelected:(id)arg1;
+ (void)markCalendarMenuItemAsSelected:(id)arg1;

- (id)_labelMenuItems;
- (id)_localizedLabel;
- (void)_updateViewLabel;
- (BOOL)_validateLabelMenuItem:(id)arg1;
- (BOOL)allowsLabelCustomization;
- (id)collectionViewAction;
- (id)dateComponentsValueTransformer;
- (void)datumView:(id)arg1 textDidChange:(id)arg2;
- (void)labelChanged:(id)arg1;
- (id)labelForPopup;
- (id)labelItemWithTitle:(id)arg1 calendarIdentifier:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (id)placeholderString;
- (void)setLabel:(id)arg1;
- (void)takeValueFromGregorianBirthday;

@end
