//
//  LineChartView.h
//  LineChart
//
//  Created by Jay Bergonia on 28/08/2019.
//  Copyright © 2019 Jay Bergonia. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDLineChartViewDataSource, WDLineChartViewDelegate;

@interface WDLineChartView : UIView

@property (nonatomic, assign) CGFloat marginH;
@property (nonatomic, assign) CGFloat marginV;
@property (nonatomic, strong) UIColor *backgroundLineColor;
@property (nonatomic, strong) UIColor *averageLineColor;
@property (nonatomic, assign) CGFloat backgroundLineWidth;
@property (nonatomic, strong) NSArray *gradientColors;
@property (nonatomic, strong) UIColor *chartLineColor;
@property (nonatomic, assign) CGFloat chartLineWidth;
@property (nonatomic, assign) CGFloat labelHeight;
@property (nonatomic, strong) UIColor *labelColor;
@property (nonatomic, assign) CGFloat nodeSize;
@property (nonatomic, assign) CGFloat animationDuration;
@property (nonatomic, assign) BOOL animated;
@property (nonatomic, assign) BOOL gradiented;
@property (nonatomic, assign) BOOL showLabel;
@property (nonatomic, assign) BOOL showAverageLine;

@property (nonatomic, weak) id<WDLineChartViewDataSource> dataSource;
@property (nonatomic, weak) id<WDLineChartViewDelegate> delegate;

- (void)loadData;
- (void)loadDataWithSelectedKept;
- (void)removeSublayers;

@end

@protocol WDLineChartViewDataSource <NSObject>
@required
- (NSUInteger)numberOfElements;
- (CGFloat)maxValue;
- (CGFloat)minValue;
- (CGFloat)valueForElementAtIndex:(NSUInteger)index;
@optional
- (NSString*)labelForElementAtIndex:(NSUInteger)index;
- (CGFloat)averageValue;
@end

@protocol WDLineChartViewDelegate <NSObject>
@optional
- (void)clickedNodeAtIndex:(NSUInteger)index;
@end
