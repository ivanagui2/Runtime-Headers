/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SecurityInterface.framework/Versions/A/SecurityInterface
 */

@interface SFPasswordErrorSource : NSObject {
    int  SFPasswordErrorType;
    NSMutableAttributedString * _attrString;
    id  _controller;
    NSImage * _iconError;
    NSImage * _iconWarning;
    NSMatrix * _theMatrix;
}

- (id)attrStringForWarning:(id)arg1 type:(int)arg2 font:(id)arg3;
- (void)dealloc;
- (id)init;
- (void)matrixReloaded;
- (int)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;

@end