//
//  Deck.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Deck.hpp"


Deck::Deck()
{
    
}

Deck::~Deck()
{
    
}

void Deck::populate()
{
       for (int i=0;i<4;i++)
           {
               for (int j=0;j<13;j++)
                   {
                       deck_of_cards.push_back(Card(suits[i],faces[j]));
                   }
           }
}

void Deck::print()
{
    {
           for (vector<Card>::iterator it=deck_of_cards.begin();it!=deck_of_cards.end();it++)
               {
                   cout<<it->getface()<< " of "<<it->getsuit()<<endl;
               }
       }
}

void Deck::shuffle()
{
        unsigned seed =chrono::system_clock::now().time_since_epoch().count();
        default_random_engine e(seed);
        ::shuffle(deck_of_cards.begin(), deck_of_cards.end(), e);
}

Card Deck::deal()
{
    Card c=deck_of_cards.back();
    deck_of_cards.pop_back();
    return c;
}
