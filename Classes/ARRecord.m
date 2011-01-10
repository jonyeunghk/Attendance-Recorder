//
//  ARRecord.m
//  Attendance Recorder
//
//  Created by s140353 on 08/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ARRecord.h"


@implementation ARRecord

@synthesize shiftInRecord,wasLate,wasAlternate;

-(void)setWasLate:(BOOL)Late{
    
    [self setWasLate:Late];
    
}

-(void)setWasAlternate:(BOOL)Alternate{
    
    [self setWasAlternate:Alternate];
    
    
}

@end
