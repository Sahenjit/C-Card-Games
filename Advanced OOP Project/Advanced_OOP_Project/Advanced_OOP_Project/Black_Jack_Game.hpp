//
//  Black_Jack_Game.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Black_Jack_Game_hpp
#define Black_Jack_Game_hpp
#include "Game.hpp"
#include "Deck.hpp"
#include "Card.hpp"
#include "Black_Jack_Deck.hpp"

class Black_Jack_Game:public Game
{
private:
        Black_Jack_Deck b;
        Black_Jack_Deck user_choice;
        int no_of_rounds=0;
        int rounds_won=0;
        int rounds_lost=0;
public:
        Black_Jack_Game();
        void dealcard_player(int &score,Card cardptr,bool player,int &i);
        void dealcard_dealer(int &score,Card cardptr,bool player,int &i);
        virtual void menu() override;
        virtual void play() override;
        void Round_Stats();
        char getPlayerchoice();
};

#endif /* Black_Jack_Game_hpp */
