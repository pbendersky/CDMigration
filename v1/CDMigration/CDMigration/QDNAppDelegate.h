//
//  QDNAppDelegate.h
//  CDMigration
//
//  Created by Pablo Bendersky on 5/23/13.
//  Copyright (c) 2013 Pablo Bendersky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QDNAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
