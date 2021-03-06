/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class UITransitionView, UIViewController, UIWindow;

@interface UIWindowController : NSObject {
	UITransitionView* _transitionView;
	UIWindow* _window;
	int _currentTransition;
	id _target;
	SEL _didEndSelector;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	CGPoint _beginOriginForToView;
	CGPoint _endOriginForToView;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL _presenting;
#endif
}
@property(assign, nonatomic) UIWindow* window;
+(id)windowControllerForWindow:(id)window;
+(void)windowWillBeDeallocated:(id)window;
// inherited: -(void)dealloc;
-(CGPoint)_originForViewController:(id)viewController orientation:(int)orientation fullScreenLayout:(BOOL)layout;
-(CGSize)_flipSize:(CGSize)size;
-(void)_prepareKeyboardForTransition:(int)transition fromView:(id)view;
-(void)_transplantView:(id)view toSuperview:(id)superview atIndex:(unsigned)index;
-(void)transition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(double)durationForTransition:(int)transition;
-(CGPoint)_adjustOrigin:(CGPoint)origin givenOtherOrigin:(CGPoint)origin2 forTransition:(int)transition;
-(CGPoint)transitionView:(id)view endOriginForFromView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;
-(CGPoint)transitionView:(id)view beginOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;
-(CGPoint)transitionView:(id)view endOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(readonly, assign, nonatomic) UITransitionView* transitionView;
@property(assign, nonatomic) BOOL presenting;
-(CGRect)_boundsForViewController:(id)viewController transition:(int)transition orientation:(int)orientation fullScreenLayout:(BOOL)layout;
-(void)transitionView:(id)view startCustomTransitionWithDuration:(double)duration;
#else
-(CGRect)_boundsForViewController:(id)viewController orientation:(int)orientation fullScreenLayout:(BOOL)layout;
-(CGAffineTransform)_rotationTransformForInterfaceOrientation:(int)interfaceOrientation;
#endif
@end

