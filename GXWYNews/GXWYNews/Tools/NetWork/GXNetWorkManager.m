//
//  GXNetWorkManager.m
//  GXWYNews
//
//  Created by Tony on 2018/1/27.
//  Copyright © 2018年 Tony. All rights reserved.
//

#import "GXNetWorkManager.h"

@implementation GXNetWorkManager

+ (instancetype)sharedManager {
    static GXNetWorkManager *_instance;
    
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        
        // 末尾反斜线
        NSURL *baseUrl = [NSURL URLWithString:@"http://c.m.163.com/nc/article/"];
        
        _instance = [[self alloc] initWithBaseURL:baseUrl];
    });
    return _instance;
}







@end











