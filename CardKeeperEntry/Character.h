//
//  Character.h
//  CardKeeperEntry
//
//  Created by Joseph Sickel on 2/14/12.
//  Copyright (c) 2012 Ozate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CardSet;

@interface Character : NSManagedObject

@property (nonatomic, retain) NSString * race;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * profession;
@property (nonatomic) int32_t level;
@property (nonatomic, retain) NSSet *cardSets;
@end

@interface Character (CoreDataGeneratedAccessors)

- (void)addCardSetsObject:(CardSet *)value;
- (void)removeCardSetsObject:(CardSet *)value;
- (void)addCardSets:(NSSet *)values;
- (void)removeCardSets:(NSSet *)values;

@end
