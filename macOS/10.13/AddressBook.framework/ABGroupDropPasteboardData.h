/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABGroupDropPasteboardData : NSObject {
    NSArray * _entryUids;
    NSArray * _filenames;
    NSArray * _groupUids;
    NSArray * _linkedPeopleUids;
    NSArray * _peopleUids;
}

@property (atomic, readonly) NSArray *entryUids;
@property (atomic, readonly) NSArray *filenames;
@property (atomic, readonly) NSArray *groupUids;
@property (atomic, readonly) NSArray *linkedPeopleUids;
@property (atomic, readonly) NSArray *peopleUids;

+ (id)pasteboardDataWithDraggingPasteboard:(id)arg1;

- (BOOL)containsFilenames;
- (BOOL)containsGroupRecords;
- (BOOL)containsLinkedPeopleRecords;
- (BOOL)containsPeopleRecords;
- (BOOL)containsRecords;
- (void)dealloc;
- (id)description;
- (id)entryUids;
- (id)filenames;
- (id)groupUids;
- (id)initWithPeopleUids:(id)arg1 linkedPeopleUids:(id)arg2 groupUids:(id)arg3 entryUids:(id)arg4 filenames:(id)arg5;
- (BOOL)isEmpty;
- (id)linkedPeopleUids;
- (id)peopleUids;

@end