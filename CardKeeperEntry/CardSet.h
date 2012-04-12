//
//  CardSet.h
//  CardKeeperEntry
//
//  Created by Joseph Sickel on 2/14/12.
//  Copyright (c) 2012 Ozate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Card, Character;

@interface CardSet : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *cards;
@property (nonatomic, retain) Character *character;
@end

@interface CardSet (CoreDataGeneratedAccessors)

- (void)addCardsObject:(Card *)value;
- (void)removeCardsObject:(Card *)value;
- (void)addCards:(NSSet *)values;
- (void)removeCards:(NSSet *)values;

@end
