//
//  CTTransaction.h
//  ClimaTact
//
//  Created by Jason Ti on 4/7/14.
//  Copyright (c) 2014 Jason Ti. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTTransaction : NSObject

@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSDate *posted_at;
@property (nonatomic, assign) float value_number;

@end
