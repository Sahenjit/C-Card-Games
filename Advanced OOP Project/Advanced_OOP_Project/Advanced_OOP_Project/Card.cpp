//
//  Card.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Card.hpp"
#include <string>
#include <iostream>
using namespace std;

Card::Card()
{
    suit="NULL";
    face="NULL";
}

Card::Card(string suit,string face)
{
    this->suit=suit;
    this->face=face;
}

string Card::getface()
{

    return face;
}
string Card::getsuit()
{
    return suit;
}
void Card::setface(string face)
{
    this->face=face;
}

void Card::setsuit(string suit)
{
    this->suit=suit;
}
