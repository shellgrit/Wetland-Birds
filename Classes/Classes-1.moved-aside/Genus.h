//
//  Genus.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Animal;
@class Family;

@interface Genus :  NSManagedObject  
{
}

@property (nonatomic, retain) UNKNOWN_TYPE genusName;
@property (nonatomic, retain) NSSet* species;
@property (nonatomic, retain) Family * family;

@end


@interface Genus (CoreDataGeneratedAccessors)
- (void)addSpeciesObject:(Animal *)value;
- (void)removeSpeciesObject:(Animal *)value;
- (void)addSpecies:(NSSet *)value;
- (void)removeSpecies:(NSSet *)value;

@end

