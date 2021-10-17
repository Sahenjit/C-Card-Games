//
//  Card_Guessing_Game.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Card_Guessing_Game.hpp"
#include <string>
#include <vector>
using namespace std;

Card_Guessing_Game::Card_Guessing_Game()
{
    
}

void Card_Guessing_Game::play()
{
    d.populate();
    d.shuffle();
    Card top=d.deal();
    int face_secret=d.convert_decktype_face(top);
    int suit_secret=d.convert_decktype_suit(top);
    int tries=0;
    string face;
    string suit;
    cout<<"********************************************"<<endl;
    cout<<" ******************************************"<<endl;
    cout<<"    *************************************"<<endl;
    cout<<"      *****!!!!GUESS MY CARD!!!!*****"<<endl;
    cout<<"    *************************************"<<endl;
    cout<<" ******************************************"<<endl;
    cout<<"********************************************"<<endl;
    
    while(true)
    {
        cout<<endl;
        cout<<"Please enter the card which you believe has been chosen: ";
        cin>>face;
        cout<<" of ";
        cin>>suit;
        tries++;
        user_cards.deck_of_cards.push_back(Card(suit,face));
        Card user_card=user_cards.deal();
        int face_user=d.convert_decktype_face(user_card);
        int suit_user=d.convert_decktype_suit(user_card);
      

        
            if((suit_user>suit_secret) && (face_user>face_secret))
                {
                    cout<<"The suit is too high. The face is too high. Please try again.";
                }
            else if((suit_user>suit_secret) && (face_user<face_secret))
                {
                    cout<<"The suit is too high. The face is too low. Please try again.";
                }
            else if((suit_user==suit_secret) && (face_user<face_secret))
                {
                    cout<<"This suit is correct. The face is too low. Please try again";
                }
            else if((suit_user==suit_secret) && (face_user>face_secret))
                {
                    cout<<"This suit is correct. The face is too high. Please try again";
                }
            else if((suit_user<suit_secret) && (face_user<face_secret))
                {
                    cout<<"This suit is too low. The face is too low. Please try again";
                }
            else if((suit_user<suit_secret) && (face_user>face_secret))
                {
                    cout<<"The suit is too low. The face is too high. Please try again";
                }
            else if((suit_user<suit_secret) && (face_user==face_secret))
                {
                    cout<<"The suit is too low. The face is correct. Please try again";
                }
            else if((suit_user>suit_secret) && (face_user==face_secret))
                {
                    cout<<"The suit is too high. The face is correct. Please try again";
                }
            else if((suit_user==suit_secret) && (face_user==face_secret))
            {
                cout<<"Correct. You have got the Card in: "<<tries<<" tries "<<endl;
                break;
            }
    }

}

void Card_Guessing_Game::menu()
{
   Card_Guessing_Game::play();
   bool quit=false;
   int count=0;
   char choice;
   while(!quit)
       {
           cout<<"Would you like to play again? [y]es or[n]o?";
           cin>>choice;
           cout<<endl;
           if(choice=='y')
           {
              Card_Guessing_Game::play();
           }
           else if(choice=='n')
           {
               cout<<"Thank you for playing :)"<<endl;
               break;
           }
       }
}


        
