//
//  Created by Diyuan Wang on 2019/11/21.
//  Copyright © 2019年 Diyuan Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BBSApiBaseTableViewController.h"

@protocol TranslateDataDelegate;
@class TranslateData;

@interface BBSShowNewThreadPostTableViewController : BBSApiBaseTableViewController

- (IBAction)showLeftDrawer:(id)sender;

@property(weak, nonatomic) IBOutlet UIBarButtonItem *leftMenu;

@end
