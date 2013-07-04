//
//  QDNDetailViewController.h
//  CDMigration
//
//  Created by Pablo Bendersky on 5/23/13.
//  Copyright (c) 2013 Pablo Bendersky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QDNDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
