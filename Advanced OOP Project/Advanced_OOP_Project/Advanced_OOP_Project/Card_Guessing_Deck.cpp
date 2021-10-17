//
//  Card_Guessing_Deck.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 05/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Card_Guessing_Deck.hpp"

Card_Guessing_Deck::Card_Guessing_Deck():Deck()
{
    
}



int Card_Guessing_Deck::convert_decktype_face(Card c)
{
        if (c.getface()=="2" || c.getface()=="Two" || c.getface()=="two" ||c.getface()=="TWO")
                   {
                       return 1;
                   }
        else if(c.getface()=="3" ||c.getface()=="Three" ||c.getface()=="three" ||c.getface()=="THREE")
                   {
                       return 2;
                   }
        else if(c.getface()=="4" || c.getface()=="Four" ||c.getface()=="four" ||c.getface()=="FOUR")
                   {
                       return 3;
                   }
        else if(c.getface()=="5" ||c.getface()=="Five" ||c.getface()=="five" ||c.getface()=="FIVE")
                   {
                       return 4;
                   }
        else if(c.getface()=="6" ||c.getface()=="Six" ||c.getface()=="six" ||c.getface()=="SIX")
                   {
                       return 5;
                   }
        else if(c.getface()=="7" ||c.getface()=="Seven" ||c.getface()=="seven" ||c.getface()=="SEVEN")
                   {
                       return 6;
                   }
        else if(c.getface()=="8" ||c.getface()=="Eight" ||c.getface()=="eight" ||c.getface()=="EIGHT")
                   {
                       return 7;
                   }
        else if(c.getface()=="9" ||c.getface()=="Nine" ||c.getface()=="nine" ||c.getface()=="NINE")
                   {
                       return 8;
                   }
        else if(c.getface()=="10" ||c.getface()=="Ten" ||c.getface()=="ten" ||c.getface()=="TEN")
                   {
                       return 9;
                   }
        else if(c.getface()=="Jack" ||c.getface()=="jack" ||c.getface()=="JACK")
                   {
                       return 10;
                   }
        else if(c.getface()=="Queen" ||c.getface()=="queen" ||c.getface()=="QUEEN")
                   {
                       return 11;
                   }
        else if(c.getface()=="King" ||c.getface()=="king" ||c.getface()=="KING")
                   {
                       return 12;
                   }
        else if(c.getface()=="Ace" ||c.getface()=="ace" ||c.getface()=="ACE")
                   {
                       return 13;
                   }
        else
                   {
                       return 0;
                   }
}
int Card_Guessing_Deck::convert_decktype_suit(Card c)
{
    if(c.getsuit()=="Clubs" ||c.getsuit()=="clubs" ||c.getsuit()=="CLUBS")
             {
                 return 1;
             }
    else if(c.getsuit()=="Diamonds" ||c.getsuit()=="diamonds" ||c.getsuit()=="DIAMONDS")
             {
                 return 2;
             }
    else if(c.getsuit()=="Hearts" ||c.getsuit()=="hearts" ||c.getsuit()=="HEARTS")
             {
                 return 3;
             }
    else if(c.getsuit()=="Spades" ||c.getsuit()=="spades" ||c.getsuit()=="SPADES")
             {
                 return 4;
             }
    else
             {
                 return 0;
             }
}




