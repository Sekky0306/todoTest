//
//  MasterViewController.h
//  TodoTest
//
//  Created by 関戸優紀 on 2015/03/15.
//  Copyright (c) 2015年 関戸優紀. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MasterViewController : UITableViewController
<UITextFieldDelegate>
{
    UIView *blackview;
    BOOL insertMode;
    UITextField *textField;
}


@end

