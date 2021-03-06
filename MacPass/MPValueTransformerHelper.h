//
//  MPValueTransformerHelper.h
//  MacPass
//
//  Created by Michael Starke on 17/03/14.
//  Copyright (c) 2014 HicknHack Software GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const MPStripLineBreaksTransformerName;
FOUNDATION_EXPORT NSString *const MPExpiryDateValueTransformer;

@interface MPValueTransformerHelper : NSObject

+ (void)registerValueTransformer;

@end
