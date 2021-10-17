//
//  Card_Guessing_Deck.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 05/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Card_Guessing_Deck_hpp
#define Card_Guessing_Deck_hpp
#include "Deck.hpp"
#include "Card.hpp"
#include <chrono>
class Card_Guessing_Deck:public Deck
{
public:
    Card_Guessing_Deck();
    virtual int convert_decktype_face(Card c) override;
    virtual int convert_decktype_suit(Card c) override;
    
};

#endif /* Card_Guessing_Deck_hpp */
