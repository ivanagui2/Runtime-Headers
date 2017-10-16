/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
 */

@interface QCOSCPatchUI : QCNetworkPatchUI {
    NSTextField * portName;
    NSPopUpButton * portType;
    NSTableView * tableView;
}

- (void)_updateUI:(id)arg1;
- (void)addPort:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)removePort:(id)arg1;
- (void)setupViewForPatch:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;

@end