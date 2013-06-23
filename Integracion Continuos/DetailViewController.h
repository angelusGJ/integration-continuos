//
//  DetailViewController.h
//  Integracion Continuos
//
//  Created by angelus on 22/06/13.
//  Copyright (c) 2013 Autentia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
