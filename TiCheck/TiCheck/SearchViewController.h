//
//  SearchViewController.h
//  TiCheck
//
//  Created by Boyi on 4/20/14.
//  Copyright (c) 2014 tac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CitySelectViewController.h"

@interface SearchViewController : UIViewController <CitySelectViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *fromCity;
@property (weak, nonatomic) IBOutlet UILabel *toCity;
@property (weak, nonatomic) IBOutlet UILabel *takeOffTime;

@end