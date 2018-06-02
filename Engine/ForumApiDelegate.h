//
//  ForumApi.h
//
//  Created by 迪远 王 on 16/10/2.
//  Copyright © 2016年 andforce. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LoginUser.h"
#import "ViewForumPage.h"
#import "ViewSearchForumPage.h"
#import "ForumConfigDelegate.h"
#import "Forum.h"
#import "vBulletinDelegate.h"
#import "DiscuzDelegate.h"
#import "PhpWindDelegate.h"
#import "ForumApiBaseDelegate.h"

@class ViewThreadPage;
@class ViewMessagePage;
@class Message;
@class ForumWebViewController;

typedef void (^HandlerWithBool)(BOOL isSuccess, id message);

typedef void (^UserInfoHandler)(BOOL isSuccess, id userName, id userId);

@protocol ForumApiDelegate <ForumApiBaseDelegate, vBulletinDelegate, DiscuzDelegate, PhpWindDelegate>


@end