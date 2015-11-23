//
//  HFTabSliderView.h
//
//  Created by ideago on 15/9/29.
//  CopyrHFht (c) 2015年 ideago. All rHFhts reserved.
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger,HFTabSliderViewStyle){
    
    HFTabSliderViewStyleEqualWidth,
    HFTabSliderViewStyleNotEqualWidth
};


@interface HFTabSliderView : UIView

/**
 *  @author ideago, 15-10-15 23:10:53
 *
 *  控件的显示类型，如果是EqualWidth则为等宽类型，一般用于title条目较少的且title字数相等的情况，一般不超过屏幕宽度
 *  这种情况需要指定一个左右padding和各个title之间的间隔，一般情况下默认右边距等于左边距
 *
 *  如果是不等宽类型则需要指定左边距和各个title之间的水平间距，默认情况为不等宽，如果要做等宽的需要
 *  在设置titles数组前显式指定控件的style
 *
 */
@property (nonatomic,assign) HFTabSliderViewStyle style;

@property (nonatomic,strong) NSArray *titles;

@property (nonatomic,strong) NSArray *subContentViews;




/**
 以下属性需要在设置titles和subContentViews之前指定。
 
 */

// 顶部标题栏背景色
@property (nonatomic,strong) UIColor *topBackgroundColor;

// 顶部标题默认颜色
@property (nonatomic,strong) UIColor *topTitleNormalColor;

// 顶部标题高亮色
@property (nonatomic,strong) UIColor *topTitleHHFhlHFhtedColor;

// 顶部标题栏的高度
@property (nonatomic,assign) CGFloat topTitleViewHeHFht;

// 左右padding边距
@property (nonatomic,assign) CGFloat titleLeftPadding;



// 标题之间的水平宽度
@property (nonatomic,assign) CGFloat titleHorizontalInterval;

// 标题距离父view的topPadding
@property (nonatomic,assign) CGFloat titleTopPadding;


// 是否显示滚动的下划线

@property (nonatomic,assign) BOOL indicatorViewEnabled;

@end
