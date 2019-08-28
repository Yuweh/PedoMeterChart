//
//  AppDelegate.h
//  PedoMeterChart
//
//  Created by Jay Bergonia on 28/08/2019.
//  Copyright © 2019 Jay Bergonia. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol UIViewControllerNavigationBar
@optional
/**
 @return whether the view controller use custom navigation bar instead of built-in navigation bar. Implement this
         method and return `YES` to use custom navigation bar in the view controller. Built-in navigation bar will be
         hidden when this method returns `YES`.
 */
- (BOOL)hasCustomNavigationBar;
@end

@interface UIViewController (NavigationBar) <UIViewControllerNavigationBar>

@property (nonatomic, strong, readonly, nonnull) UINavigationBar *navigationBar;

/**
 @return whether the view controller prefers navigation bar hidden. This method is only used when
         `hasCustomNavigationBar` does not implemented. Override this method and return `YES` if you want to make a
         view controller to hide built-in navigation bar. (default: NO)
 */
- (BOOL)prefersNavigationBarHidden;

@end
