//
//  DetailViewController.h
//  Globalized
//
//  Created by Clinton Burgos on 3/7/15.
//  Copyright (c) 2015 Noizybrain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

