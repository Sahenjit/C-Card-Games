//
//  Deck.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp
#include <ctime>
#include <random>
#include "Card.hpp"
#include <chrono>
using namespace std;
class Deck
{
protected:
    string suits[4]={"Clubs","Diamonds","Hearts","Spades"};
    string faces[13]={"2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace"};
public:
    vector<Card> deck_of_cards;
    Deck();
    void print();
    void populate();
    void shuffle();
    Card deal();
    virtual int convert_decktype_face(Card c)=0;
    virtual int convert_decktype_suit(Card c)=0;
    ~Deck();
};

#endif /* Deck_hpp */
