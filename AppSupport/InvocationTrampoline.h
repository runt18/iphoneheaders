/**
 * This header is generated by class-dump-z 0.1-11s.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>


@interface InvocationTrampoline : NSObject {
	id _target;
}
@property(retain) id target;
// inherited: -(void)dealloc;
-(void)performInvocation:(id)invocation;
// inherited: -(id)methodSignatureForSelector:(SEL)selector;
// inherited: -(BOOL)respondsToSelector:(SEL)selector;
// inherited: -(void)forwardInvocation:(id)invocation;
@end
