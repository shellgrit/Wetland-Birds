//
//  TaxonGroup.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Animal;

@interface TaxonGroup :  NSManagedObject  
{
}

@property (nonatomic, retain) NSNumber * taxonID;
@property (nonatomic, retain) UNKNOWN_TYPE taxonName;
@property (nonatomic, retain) NSSet* animals;

@end


@interface TaxonGroup (CoreDataGeneratedAccessors)
- (void)addAnimalsObject:(Animal *)value;
- (void)removeAnimalsObject:(Animal *)value;
- (void)addAnimals:(NSSet *)value;
- (void)removeAnimals:(NSSet *)value;

@end

