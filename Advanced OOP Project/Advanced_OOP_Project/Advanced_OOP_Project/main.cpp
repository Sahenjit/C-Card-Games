//
//  main.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
#include "Card_Guessing_Game.hpp"
#include "Black_Jack_Game.hpp"
#include <string>
int main()
{
    Card_Guessing_Game c_g;
    Black_Jack_Game b;
    Game *g;
    g=&b;
    int selection;
    cout<<"**************MY CARD GAMES*****************"<<endl;
    cout<<"Please select 1 if you would like to play the Card Guessing Game: "<<endl;
    cout<<"Please select 2 if you like to play the BlackJack Game: "<<endl;
    cin>>selection;
    if (selection==1)
    {
        g=&c_g;
        g->menu();
        
    }
    else if(selection==2)
    {
        g=&b;
        g->menu();
    
    }
   
}

