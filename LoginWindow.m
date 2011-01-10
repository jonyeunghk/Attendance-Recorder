//
//  MainController.m
//  Attendance Recorder
//
//  Created by s140353 on 06/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "LoginWindow.h"


@implementation MainController

#pragma mark -
#pragma mark Class Methods
//CLASS METHODS BEGIN HERE

-(IBAction)isAlternateChecked:(id)sender{
    
    if([isAlternate state]==NSOnState){
        
        [alternateNameField setHidden:NO];
        
    }
    
    else{
        
        [alternateNameField setHidden:YES];
    }
    
}

#pragma mark-
//adminPasswordAuth Methods
//adminPasswordAuth is a Modal Window used to Authenticate into the Adminstrator Area

-(IBAction)beginAdminLogin:(id)sender{
    
    [[NSApplication sharedApplication]runModalForWindow:adminPasswordAuth];
}


-(IBAction)cancelAdminLogin:(id)sender{
    
    [[NSApplication sharedApplication]endSheet:adminPasswordAuth];
    [adminPasswordAuth close];
}

-(IBAction)confirmAdminLogin:(id)sender{
    
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    NSString *password = [userDefaults objectForKey:@"adminPassword"];
    BOOL isFirstTimeAdmin = [userDefaults boolForKey:@"isFirstTimeAdmin"];
    
    if(isFirstTimeAdmin==YES){
        
        [userDefaults setObject:@"admin" forKey:@"adminPassword"];
        [userDefaults setBool:NO forKey:@"isFirstTimeAdmin"];
        [userDefaults synchronize];
        
        [[NSApplication sharedApplication]endSheet:adminPasswordAuth];
        [adminPasswordAuth close];
        
        [adminWindow makeKeyAndOrderFront:self];
        
    }
    
    if(isFirstTimeAdmin==NO){
        
//      if([adminPasswordField stringValue]==password){
            
            [[NSApplication sharedApplication]endSheet:adminPasswordAuth];
            [adminPasswordAuth close];
            
            [adminWindow makeKeyAndOrderFront:self];
            
//        }
    }
}

@end
       
       
       
       
       
       
       
       
