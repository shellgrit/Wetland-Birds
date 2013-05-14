//
//  AnimalClass.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Order;
@class Phylum;

@interface AnimalClass :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * className;
@property (nonatomic, retain) NSSet* orders;
@property (nonatomic, retain) Phylum * phylum;

@end


@interface AnimalClass (CoreDataGeneratedAccessors)
- (void)addOrdersObject:(Order *)value;
- (void)removeOrdersObject:(Order *)value;
- (void)addOrders:(NSSet *)value;
- (void)removeOrders:(NSSet *)value;

@end

