//
//  YNBanner.h
//
//
//  Created by liyangly on 2019/6/21.
//  Copyright © 2019 liyang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YNBanner : UIView

- (instancetype)initViewWithFrame:(CGRect)frame ViewList:(NSArray *)viewList timeInterval:(CGFloat)timeInterval;

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIPageControl *pageControl;

@property (nonatomic, copy) void (^yn_updatePageIndex)(NSInteger index);

@property (nonatomic, copy) void (^yn_clickPage)(NSInteger index);


//
- (void)offsetLogic;

- (void)addTimer;

- (void)nextImage;

- (void)removeTimer;

@end

NS_ASSUME_NONNULL_END
