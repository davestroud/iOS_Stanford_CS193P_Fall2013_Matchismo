//
//  Deck.h
//  Matchismo
//
//  Created by Herko ter Horst on 03/11/13.
//  Copyright (c) 2013 Herko ter Horst. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject


- (void) addCard:(Card *)card atTop:(BOOL)atTop;
- (void) addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
