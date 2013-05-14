//
//  Order.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Family;

@interface Order :  NSManagedObject  
{
}

@property (nonatomic, retain) UNKNOWN_TYPE orderName;
@property (nonatomic, retain) NSSet* families;
@property (nonatomic, retain) NSManagedObject * animalClass;

@end


@interface Order (CoreDataGeneratedAccessors)
- (void)addFamiliesObject:(Family *)value;
- (void)removeFamiliesObject:(Family *)value;
- (void)addFamilies:(NSSet *)value;
- (void)removeFamilies:(NSSet *)value;

@end

