//
//  WYNewsExstraImagesCell.h
//  GXWYNews
//
//  Created by Tony on 2018/1/27.
//  Copyright © 2018年 Tony. All rights reserved.
//

#import "WYBaseNewsListCell.h"

@interface WYNewsExstraImagesCell : WYBaseNewsListCell

@property (weak, nonatomic) IBOutlet UIImageView *iconView;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UILabel *lblSource;
@property (weak, nonatomic) IBOutlet UILabel *lblReply;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *extralIcon;

@end
