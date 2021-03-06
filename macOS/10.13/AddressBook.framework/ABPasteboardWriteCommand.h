/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABPasteboardWriteCommand : ABBookCommand {
    NSPasteboard * _pasteboard;
    <ABPasteboardData> * _pasteboardData;
}

@property (atomic, readonly) NSPasteboard *pasteboard;
@property (atomic, readonly) <ABPasteboardData> *pasteboardData;

- (void)dealloc;
- (void)execute;
- (id)initWithPasteboard:(id)arg1 pasteboardData:(id)arg2;
- (id)pasteboard;
- (id)pasteboardData;

@end
