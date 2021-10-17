//
//  Black_Jack_Deck.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 05/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Black_Jack_Deck.hpp"
Black_Jack_Deck::Black_Jack_Deck()
{
    
}




int Black_Jack_Deck::convert_decktype_face(Card c1)
{
        if(c1.getface()=="Ace" ||c1.getface()=="ace" ||c1.getface()=="ACE")
                    {
                        return 1;
                    }
        else if (c1.getface()=="2" || c1.getface()=="Two" || c1.getface()=="two" ||c1.getface()=="TWO")
                   {
                       return 2;
                   }
        else if(c1.getface()=="3" ||c1.getface()=="Three" ||c1.getface()=="three" ||c1.getface()=="THREE")
                   {
                       return 3;
                   }
        else if(c1.getface()=="4" || c1.getface()=="Four" ||c1.getface()=="four" ||c1.getface()=="FOUR")
                   {
                       return 4;
                   }
        else if(c1.getface()=="5" ||c1.getface()=="Five" ||c1.getface()=="five" ||c1.getface()=="FIVE")
                   {
                       return 5;
                   }
        else if(c1.getface()=="6" ||c1.getface()=="Six" ||c1.getface()=="six" ||c1.getface()=="SIX")
                   {
                       return 6;
                   }
        else if(c1.getface()=="7" ||c1.getface()=="Seven" ||c1.getface()=="seven" ||c1.getface()=="SEVEN")
                   {
                       return 7;
                   }
        else if(c1.getface()=="8" ||c1.getface()=="Eight" ||c1.getface()=="eight" ||c1.getface()=="EIGHT")
                   {
                       return 8;
                   }
        else if(c1.getface()=="9" ||c1.getface()=="Nine" ||c1.getface()=="nine" ||c1.getface()=="NINE")
                   {
                       return 9;
                   }
        else if(c1.getface()=="10" ||c1.getface()=="Ten" ||c1.getface()=="ten" ||c1.getface()=="TEN")
                   {
                       return 10;
                   }
        else if(c1.getface()=="Jack" ||c1.getface()=="jack" ||c1.getface()=="JACK")
                   {
                       return 10;
                   }
        else if(c1.getface()=="Queen" ||c1.getface()=="queen" ||c1.getface()=="QUEEN")
                   {
                       return 10;
                   }
        else if(c1.getface()=="King" ||c1.getface()=="king" ||c1.getface()=="KING")
                   {
                       return 10;
                   }
        else
                   {
                       return 0;
                   }
}
int Black_Jack_Deck::convert_decktype_suit(Card c1)
{
    if(c1.getsuit()=="Clubs" ||c1.getsuit()=="clubs" ||c1.getsuit()=="CLUBS")
             {
                 return 1;
             }
    else if(c1.getsuit()=="Diamonds" ||c1.getsuit()=="diamonds" ||c1.getsuit()=="DIAMONDS")
             {
                 return 1;
             }
    else if(c1.getsuit()=="Hearts" ||c1.getsuit()=="hearts" ||c1.getsuit()=="HEARTS")
             {
                 return 1;
             }
    else if(c1.getsuit()=="Spades" ||c1.getsuit()=="spades" ||c1.getsuit()=="SPADES")
             {
                 return 1;
             }
    else
             {
                 return 0;
             }
}

