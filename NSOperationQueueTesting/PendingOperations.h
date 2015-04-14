//
//  PendingOperations.h
//  NSOperationQueueTesting
//
//  Created by Chen YU on 14/4/15.
//  Copyright (c) 2015 Chen YU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PendingOperations : NSObject

@property (nonatomic, strong) NSMutableDictionary *downloadsInProgress;
@property (nonatomic, strong) NSOperationQueue *downloadQueue;

@property (nonatomic, strong) NSMutableDictionary *filtrationsInProgress;
@property (nonatomic, strong) NSOperationQueue *filtrationQueue;

@end
