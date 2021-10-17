//
//  Card_Guessing_Game.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Card_Guessing_Game_hpp
#define Card_Guessing_Game_hpp
#include "Game.hpp"
#include "Card_Guessing_Deck.hpp"
class Card_Guessing_Game:public Game
{
private:
    Card_Guessing_Deck d;
    Card_Guessing_Deck user_cards;
public:
    Card_Guessing_Game();
    virtual void menu() override;
    virtual void play() override;
};

#endif /* Card_Guessing_Game_hpp */
