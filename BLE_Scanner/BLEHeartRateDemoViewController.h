//
//  BLEHeartRateDemoViewController.h
//  BLE_Scanner
//
//  Created by Chip Keyes on 2/11/13.
//  Copyright (c) 2013 Chip Keyes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BLEDemoViewController.h"

@interface BLEHeartRateDemoViewController : BLEDemoViewController

// Heart Rate Measurement Service - model for the controller
@property (nonatomic, strong) CBService *heartRateService;
@end
