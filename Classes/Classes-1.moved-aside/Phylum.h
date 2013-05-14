//
//  Phylum.h
//  Field Guide 2010
//
//  Created by VC N on 1/08/10.
//  Copyright 2010 Museum Victoria. All rights reserved.
//

#import <CoreData/CoreData.h>


@interface Phylum :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * phylumName;
@property (nonatomic, retain) NSSet* classes;

@end


@interface Phylum (CoreDataGeneratedAccessors)
- (void)addClassesObject:(NSManagedObject *)value;
- (void)removeClassesObject:(NSManagedObject *)value;
- (void)addClasses:(NSSet *)value;
- (void)removeClasses:(NSSet *)value;

@end

