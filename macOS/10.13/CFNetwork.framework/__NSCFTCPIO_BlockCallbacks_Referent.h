/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
 */

@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; id x_2_1_5; id x_2_1_6; } x2; id x3; } * _readListener;
    struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; id x_2_1_5; id x_2_1_6; } x2; id x3; } * _writeListener;
}

- (void)dealloc;
- (id)init;
- (void)setReadListener:(struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; id x_2_1_5; id x_2_1_6; } x2; id x3; }*)arg1;
- (void)setWriteListener:(struct TCPIO_BlockCallbacks_Listener { int (**x1)(); struct CBs { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; id x_2_1_5; id x_2_1_6; } x2; id x3; }*)arg1;
- (BOOL)withListeners:(id)arg1;

@end
