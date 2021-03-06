/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABButtonCell : NSButtonCell {
    NSMutableDictionary * _disabledImages;
    NSMutableDictionary * _pressedImages;
    NSMutableDictionary * _regularImages;
    NSMutableDictionary * _selectedImages;
    BOOL  _tracking;
}

- (void)dealloc;
- (id)disabledImageForControlTint:(unsigned long long)arg1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)finalize;
- (id)imageForControlTint:(unsigned long long)arg1;
- (id)pressedImageForControlTint:(unsigned long long)arg1;
- (id)selectedImageForControlTint:(unsigned long long)arg1;
- (void)setDisabledImage:(id)arg1 forControlTint:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forControlTint:(unsigned long long)arg2;
- (void)setPressedImage:(id)arg1 forControlTint:(unsigned long long)arg2;
- (void)setSelectedImage:(id)arg1 forControlTint:(unsigned long long)arg2;

@end
