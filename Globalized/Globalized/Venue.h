//
//  Venue.h
//  Globalized
//
//  Created by Clinton Burgos on 3/7/15.
//  Copyright (c) 2015 Noizybrain. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Location;

@interface Venue : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) Location *location;

@end
