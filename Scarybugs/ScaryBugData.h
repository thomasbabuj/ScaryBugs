//
//  ScaryBugData.h
//  Scarybugs
//
//  Created by Thomas Babu Joseph on 18/7/13.
//  Copyright (c) 2013 Thomas Babu Joseph. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

// Declaring object with two properties
// strong - ARC runtime will keep the object in memory as long as there's reference to it around, and deallocate it when no reference remain
// assign - Property is set directly, with no memory management invloved. this is what i need to set for primitive types like float.
//
@property (strong) NSString *title;
@property (assign) float rating;


-(id)initWithTitle:(NSString *)title
            rating:(float)rating;

@end
