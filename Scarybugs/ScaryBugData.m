//
//  ScaryBugData.m
//  Scarybugs
//
//  Created by Thomas Babu Joseph on 18/7/13.
//  Copyright (c) 2013 Thomas Babu Joseph. All rights reserved.
//

#import "ScaryBugData.h"

@implementation ScaryBugData

@synthesize title = _title;
@synthesize rating = _rating;

-(id)initWithTitle:(NSString *)title rating:(float)rating {
    if( self = [super init] ) {
        self.title = title;
        self.rating = rating;
    }
    
    return self;
}

@end
