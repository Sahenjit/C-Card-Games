//
//  Black_Jack_Deck.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 05/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Black_Jack_Deck_hpp
#define Black_Jack_Deck_hpp
#include "Deck.hpp"
#include "Card.hpp"
#include <chrono>
class Black_Jack_Deck:public Deck
{
public:
      Black_Jack_Deck();
      virtual int convert_decktype_face(Card c1) override;
      virtual int convert_decktype_suit(Card c1) override;
};


#endif /* Black_Jack_Deck_hpp */
