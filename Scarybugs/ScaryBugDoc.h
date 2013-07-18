//
//  ScaryBugDoc.h
//  Scarybugs
//
//  Created by Thomas Babu Joseph on 18/7/13.
//  Copyright (c) 2013 Thomas Babu Joseph. All rights reserved.
//

#import <Foundation/Foundation.h>

//Including the scaryBugData class
@class ScaryBugData;

@interface ScaryBugDoc : NSObject

@property (strong) ScaryBugData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

-(id)intiWithTitle:(NSString *)title
            rating: (float) rating
        thumbImage: (UIImage *)thumbImage
        fullImage : (UIImage *)fullImage;


@end
