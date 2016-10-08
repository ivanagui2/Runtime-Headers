/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
 */

@interface NSUserScriptTaskRunner : NSObject <NSUserScriptTaskRunner> {
    NSXPCConnection * _connection;
    NSProgress * _progress;
    NSTask * _task;
}

- (void)dealloc;
- (oneway void)executeScript:(id)arg1 interpreter:(id)arg2 arguments:(id)arg3 standardInput:(id)arg4 standardOutput:(id)arg5 standardError:(id)arg6 showingProgress:(BOOL)arg7 :(id)arg8;
- (id)initWithConnection:(id)arg1;
- (BOOL)isSanitaryArgumentList:(id)arg1 forInterpreter:(id)arg2;
- (BOOL)isValidScriptPath:(id)arg1;

@end