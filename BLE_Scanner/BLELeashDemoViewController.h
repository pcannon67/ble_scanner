//
//  BLELeashDemoViewController.h
//  BLE_Scanner
//
//  Created by Chip Keyes on 2/13/13.
//  Copyright (c) 2013 Chip Keyes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLEDemoViewController.h"


@interface BLELeashDemoViewController : BLEDemoViewController

@property (nonatomic, strong) CBService * transmitPowerService;
@property (nonatomic, strong) CBService * immediateAlertService;

@end
