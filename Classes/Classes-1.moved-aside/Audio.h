//
//  Audio.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Animal;

@interface Audio :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * filename;
@property (nonatomic, retain) NSString * caption;
@property (nonatomic, retain) NSString * credit;
@property (nonatomic, retain) Animal * animal;

@end



