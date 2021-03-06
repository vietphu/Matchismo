//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Nikita Kukushkin on 30/01/2013.
//  Copyright (c) 2013 Nikita Kukushkin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

enum GameMode {
    twoCards = 2,
    threeCards = 3
    };

@interface CardMatchingGame : NSObject

// History keeps short descriptions of players actions
@property (nonatomic, readonly) NSArray *history; // of NSString
@property (nonatomic, readonly) int score;
@property (nonatomic, readonly) int flipCount;

- (id)initWithCardCount:(NSUInteger)cardCount andGameMode:(enum GameMode)gameMode usingDeck:(Deck *)deck;
- (BOOL)isGameOver;

- (void)flipCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;


@end
