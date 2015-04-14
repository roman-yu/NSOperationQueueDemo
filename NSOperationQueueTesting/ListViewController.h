//
//  ListViewController.h
//  NSOperationQueueTesting
//
//  Created by Chen YU on 14/4/15.
//  Copyright (c) 2015 Chen YU. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PhotoRecord.h"
#import "PendingOperations.h"
#import "ImageDownloader.h"
#import "ImageFiltration.h"
#import "AFNetworking.h"

#define kDatasourceURLString @"http://www.raywenderlich.com/downloads/ClassicPhotosDictionary.plist"

@interface ListViewController : UITableViewController <ImageDownloaderDelegate, ImageFiltrationDelegate>

@property (nonatomic, strong) NSMutableArray *photos;

@property (nonatomic, strong) PendingOperations *pendingOperations;

@end

