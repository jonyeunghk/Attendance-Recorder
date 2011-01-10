//
//  AdminWindow.h
//  Attendance Recorder
//
//  Created by s140353 on 10/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AdminWindow : NSObject {
    
    //Main Admin Window Objects
    IBOutlet NSButton *checkAttendance;
    IBOutlet NSButton *editSDLTInfo;
    
    //Attendance Checker Objects
    IBOutlet NSWindow *checkAttendanceWindow;
    
    IBOutlet NSView *checkerSideBar;
    IBOutlet NSView *checkerMainView;
    
    //SDLT Info Changer Objects
    


}

//Main Window Methods
-(IBAction)checkAttendancePressed:(id)sender;
-(IBAction)editSDLTInfoPressed:(id)sender;

@end
