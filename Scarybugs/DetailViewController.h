//
//  DetailViewController.h
//  Scarybugs
//
//  Created by Thomas Babu Joseph on 18/7/13.
//  Copyright (c) 2013 Thomas Babu Joseph. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
