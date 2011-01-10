//
//  ARMember.h
//  Attendance Recorder
//
//  Created by s140353 on 07/01/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface ARMember : NSObject {
    
    NSString *firstname;
    NSString *lastname;
    NSString *studentNumber;
    
    BOOL isSignedIn;
}

@property(nonatomic,retain)NSString *firstname;
@property(nonatomic,retain)NSString *lastname;
@property(nonatomic,retain)NSString *studentNumber;
@property(nonatomic)BOOL isSignedIn;

@end
