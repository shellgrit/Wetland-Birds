//
//  Family.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Family :  NSManagedObject  
{
}

@property (nonatomic, retain) UNKNOWN_TYPE familyName;
@property (nonatomic, retain) NSManagedObject * order;
@property (nonatomic, retain) NSSet* genuses;

@end


@interface Family (CoreDataGeneratedAccessors)
- (void)addGenusesObject:(NSManagedObject *)value;
- (void)removeGenusesObject:(NSManagedObject *)value;
- (void)addGenuses:(NSSet *)value;
- (void)removeGenuses:(NSSet *)value;

@end

