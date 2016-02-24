由于StoryBoard故事板对Tabbar的tinColor更改无效，因此自定义一个可视化类，方便StoryBoard对Tabbar的开发，提高StoryBoard的开发效率。
先看下效果：

![图片](/Users/mac/Downloads/Snip20160224_2.png)


![图片](/Users/mac/Downloads/Snip20160224_3.png)


![图片](/Users/mac/Downloads/Snip20160224_4.png)

**自定义一个可视化类**


*LLuTabBarTintColor.h*

	#import <UIKit/UIKit.h>

	IB_DESIGNABLE  // 动态刷新

	@interface LLuTabBarTintColor : UITabBar

	// 注意: 加上IBInspectable就可以可视化显示相关的属性哦

	/** 可视化tabBar点击时颜色 */
	@property (nonatomic, strong)IBInspectable UIColor *TabBartintColor;

	@end`
		

*LLuTabBarTintColor.m*

	
	#import "LLuTabBarTintColor.h"

	@implementation LLuTabBarTintColor

	/**
	 *  设置tabBar的tintColor
	 *
	 *  @param TabBartintColor 可视化视图传入的值
	 */
	- (void)setTabBartintColor:(UIColor *)TabBartintColor {
    
    	self.tintColor = TabBartintColor;
	}

	@end

**使用方法**

IB_DESIGNABLE

	使用方法：在swift里，@IBDesignable关键字写在class前即可。 
	在OC里，是IB_DESIGNABLE这个关键字，写在@implementation前即可 
	IBInspectable 
	主要作用：使view内的变量可视化，并且可以修改后马上看到

IBInspectable

	使用方法：在swift里，@IBInspectable关键字写在需要显示的变量前即可 
	在OC里，是IBInspectable这个关键字，写在需要显示的变量前即可 
	另外附两个快捷键： 
	command+shift+O，快速打开需要的文件 
	control+shift+鼠标左击sb，可以选择需要的sb活着view
