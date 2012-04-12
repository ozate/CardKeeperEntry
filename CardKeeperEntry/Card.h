//
//  Card.h
//  CardKeeperEntry
//
//  Created by Joseph Sickel on 2/14/12.
//  Copyright (c) 2012 Ozate Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class CardSet;

@interface Card : NSManagedObject

@property (nonatomic, retain) NSString * actionType;
@property (nonatomic, retain) NSString * attackType;
@property (nonatomic, retain) NSString * defenseType;
@property (nonatomic, retain) NSString * frequencyType;
@property (nonatomic, retain) NSString * hitChance;
@property (nonatomic, retain) NSString * hitEffect;
@property (nonatomic) int16_t levelRequirement;
@property (nonatomic, retain) NSString * missEffect;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * professionRequirement;
@property (nonatomic, retain) NSString * tags;
@property (nonatomic) int16_t targetCount;
@property (nonatomic) BOOL used;
@property (nonatomic, retain) NSString * raceRequirement;
@property (nonatomic, retain) NSSet *cardSets;
@end

@interface Card (CoreDataGeneratedAccessors)

- (void)addCardSetsObject:(CardSet *)value;
- (void)removeCardSetsObject:(CardSet *)value;
- (void)addCardSets:(NSSet *)values;
- (void)removeCardSets:(NSSet *)values;

@end
