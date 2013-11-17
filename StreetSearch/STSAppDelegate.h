//
//  STSAppDelegate.h
//  StreetSearch
//
//  Created by Sergey Dunets on 17.11.13.
//  Copyright (c) 2013 Zen Carrot. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface STSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
