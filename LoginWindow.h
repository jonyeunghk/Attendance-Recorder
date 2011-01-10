//
//  MainController.h
//  Attendance Recorder
//
//  Created by s140353 on 06/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface MainController : NSObject {
    
    
    IBOutlet NSButton *isAlternate;
    IBOutlet NSButton *beginSession;
    
    IBOutlet NSTextField *alternateNameField;
    
    IBOutlet NSView *loginView;
    IBOutlet NSView *sessionView;
    
    IBOutlet NSWindow *standardWindow;
    IBOutlet NSWindow *adminWindow;
    IBOutlet NSWindow *adminPasswordAuth;
    
    IBOutlet NSTextField *adminPasswordField;

}

-(IBAction)isAlternateChecked:(id)sender;

//adminPasswordAuth Methods
-(IBAction)beginAdminLogin:(id)sender;
-(IBAction)cancelAdminLogin:(id)sender;
-(IBAction)confirmAdminLogin:(id)sender;


@end
