//
//  WebViewController.h
//  webapp1
//
//  Created by Pedro Cardoso on 29/03/14.
//  Copyright (c) 2014 Clear Hybrid Apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) UIWebView *webView;
@property (nonatomic, strong) NSString *address;

@end
