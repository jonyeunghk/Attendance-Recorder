//
//  ARRecord.h
//  Attendance Recorder
//
//  Created by s140353 on 08/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARShift.h"
#import "ARMember.h"


@interface ARRecord : NSObject {
    
    ARShift *shiftInRecord;
    
    BOOL wasLate;
    BOOL wasAlternate;
    
}

@property(nonatomic,retain)ARShift *shiftInRecord;

@property(nonatomic)BOOL wasLate;
@property(nonatomic)BOOL wasAlternate;

@end
