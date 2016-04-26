//
//  AppDelegate.h
//  CheckInternetConnectivity
//
//  Created by Volansys_MACMINI on 26/04/16.
//  Copyright © 2016 Volansys_MACMINI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    Reachability *internetReachable;
}

@property (strong, nonatomic) UIWindow *window;


@end

