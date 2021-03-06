//
//  UIScreen+SYKit.h
//  SYKit
//
//  Created by Stanislas Chevallier on 07/07/14.
//  Copyright (c) 2014 Syan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (SYKit)

- (CGRect)boundsFixedToPortraitOrientation;

- (CGRect)screenRectForOrientation:(UIInterfaceOrientation)orientation
    showStatusBarOnIphoneLandscape:(BOOL)showStatusBarOnIphoneLandscape
           ignoreStatusBariOSOver7:(BOOL)ignoreStatusBariOSOver7;

@end
