//
//  ARShift.h
//  Attendance Recorder
//
//  Created by s140353 on 07/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ARMember.h"


@interface ARShift : NSObject {
    
    ARMember *memberOnShift;
    
    NSDate *beginTime;
    NSDate *endTime;
    
    NSTimer *countDownTimer;
    NSTimer *elapsedTime;

}

@property (nonatomic,retain)ARMember *memberOnShift;
@property (nonatomic,retain)NSDate *beginTime;
@property (nonatomic,retain)NSDate *endTime;
@property (nonatomic,retain)NSTimer *countDownTimer;
@property (nonatomic,retain)NSTimer *elapsedTime;


@end
