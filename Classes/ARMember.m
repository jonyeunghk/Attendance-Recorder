//
//  ARMember.m
//  Attendance Recorder
//
//  Created by s140353 on 07/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ARMember.h"


@implementation ARMember

@synthesize firstname;
@synthesize lastname;
@synthesize studentNumber;
@synthesize isSignedIn;

-(void)authenticate{
    
    self.isSignedIn = YES;
    
}

-(void)unauthenticate{
    
    self.isSignedIn = YES;
}

@end
