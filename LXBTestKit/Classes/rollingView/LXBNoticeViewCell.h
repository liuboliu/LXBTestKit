//
//  TPNoticeViewCell.m
//  TEXT
//
//  Created by 刘博 on 2021/3/18.
//  Copyright © 2021 刘博. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LXBNoticeViewCell : UIView

@property (nonatomic, readonly, copy) NSString *reuseIdentifier;

- (instancetype)initWithReuseIdentifier:(NSString *)reuseIdentifier NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;

@end
