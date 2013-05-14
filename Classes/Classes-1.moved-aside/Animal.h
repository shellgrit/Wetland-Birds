//
//  Animal.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Animal :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * distribution;
@property (nonatomic, retain) NSString * animalName;
@property (nonatomic, retain) NSString * biology;
@property (nonatomic, retain) NSString * species;
@property (nonatomic, retain) NSString * identifiers;
@property (nonatomic, retain) NSString * size;
@property (nonatomic, retain) NSString * distinctive;
@property (nonatomic, retain) NSString * habitat;
@property (nonatomic, retain) NSNumber * nocturnal;
@property (nonatomic, retain) NSString * diet;
@property (nonatomic, retain) NSString * bite;
@property (nonatomic, retain) NSSet* statuses;
@property (nonatomic, retain) NSSet* commonNames;
@property (nonatomic, retain) NSManagedObject * genus;
@property (nonatomic, retain) NSSet* audios;
@property (nonatomic, retain) NSSet* images;
@property (nonatomic, retain) NSManagedObject * taxon;

@end


@interface Animal (CoreDataGeneratedAccessors)
- (void)addStatusesObject:(NSManagedObject *)value;
- (void)removeStatusesObject:(NSManagedObject *)value;
- (void)addStatuses:(NSSet *)value;
- (void)removeStatuses:(NSSet *)value;

- (void)addCommonNamesObject:(NSManagedObject *)value;
- (void)removeCommonNamesObject:(NSManagedObject *)value;
- (void)addCommonNames:(NSSet *)value;
- (void)removeCommonNames:(NSSet *)value;

- (void)addAudiosObject:(NSManagedObject *)value;
- (void)removeAudiosObject:(NSManagedObject *)value;
- (void)addAudios:(NSSet *)value;
- (void)removeAudios:(NSSet *)value;

- (void)addImagesObject:(NSManagedObject *)value;
- (void)removeImagesObject:(NSManagedObject *)value;
- (void)addImages:(NSSet *)value;
- (void)removeImages:(NSSet *)value;

@end

