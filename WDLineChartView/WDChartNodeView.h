//
//  ChartNodeView.h
//  LineChart
//
//  Created by Jay Bergonia on 28/08/2019.
//  Copyright © 2019 Jay Bergonia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDChartNodeView : UIView

@property (nonatomic, assign) NSUInteger index;
@property (nonatomic, assign) BOOL isActive;

- (void)toggleState;
@end
