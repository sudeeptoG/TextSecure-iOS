//
//  UserDefaults.h
//  TextSecureiOS
//
//  Created by Christine Corbett Moran on 3/27/13.
//  Copyright (c) 2013 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserDefaults : NSObject

+(BOOL) hasVerifiedPhone;
+(void) markVerifiedPhone;
+(BOOL) hasSentVerification;
+(void) markSentVerification;
@end
