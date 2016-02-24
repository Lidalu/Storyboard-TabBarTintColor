//
//  LLuTabBarTintColor.h
//  TabBarTintColor
//
//  Created by ma c on 2/19/16.
//  Copyright © 2016 lu. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE  // 动态刷新

@interface LLuTabBarTintColor : UITabBar

// 注意: 加上IBInspectable就可以可视化显示相关的属性哦

/** 可视化tabBar点击时颜色 */
@property (nonatomic, strong)IBInspectable UIColor *TabBartintColor;

@end
