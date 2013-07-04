//
//  QDNMasterViewController.h
//  CDMigration
//
//  Created by Pablo Bendersky on 5/23/13.
//  Copyright (c) 2013 Pablo Bendersky. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface QDNMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
