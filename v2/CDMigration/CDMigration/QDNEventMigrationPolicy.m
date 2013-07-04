//
//  QDNEventMigrationPolicy.m
//  CDMigration
//
//  Created by Pablo Bendersky on 5/23/13.
//  Copyright (c) 2013 Pablo Bendersky. All rights reserved.
//

#import "QDNEventMigrationPolicy.h"

@implementation QDNEventMigrationPolicy

- (BOOL)createDestinationInstancesForSourceInstance:(NSManagedObject *)sInstance entityMapping:(NSEntityMapping *)mapping manager:(NSMigrationManager *)manager error:(NSError *__autoreleasing *)error {
    
    NSManagedObject *newEvent = [NSEntityDescription insertNewObjectForEntityForName:@"Event" inManagedObjectContext:[manager destinationContext]];
    
    [newEvent setValue:[sInstance valueForKey:@"timeStamp"] forKey:@"timeStamp"];
    [newEvent setValue:@"test" forKey:@"dummyString"];
    
    [manager associateSourceInstance:sInstance withDestinationInstance:newEvent forEntityMapping:mapping];
    
    return YES;
}

@end
