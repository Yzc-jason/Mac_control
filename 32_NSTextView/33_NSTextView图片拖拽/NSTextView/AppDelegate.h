//
//  AppDelegate.h
//  NSTextView
//
//  Created by 郭韬 on 15/11/20.
//  Copyright © 2015年 33e9. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate,NSTextViewDelegate>
{
    
    IBOutlet NSTextView *textView;
}

@property (nonatomic,assign) BOOL isChanged;
@end

