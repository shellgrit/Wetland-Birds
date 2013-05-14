//
//  CommonName.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Animal;

@interface CommonName :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * commonName;
@property (nonatomic, retain) Animal * animals;

@end



