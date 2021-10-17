//
//  Black_Jack_Game.cpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "Black_Jack_Game.hpp"

Black_Jack_Game::Black_Jack_Game()
{
    
}


char Black_Jack_Game::getPlayerchoice()
{
    cout<<endl;
    cout<<"Please choose whether you would like to stick or twist (s/t): ";
    char choice;
    do
    {
        cin>>choice;
    }while(choice!='t' && choice !='s');
    return choice;
}


void Black_Jack_Game::menu()
{
    Black_Jack_Game::play();
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
                Black_Jack_Game::play();
            }
            else if(choice=='n')
            {
                cout<<"Thank you for playing :)"<<endl;
                break;
            }
        }
    Black_Jack_Game::Round_Stats();
}
void Black_Jack_Game::dealcard_player(int &score,Card cardptr,bool player,int &i)
{
    if(player)
  {
      i++;
      string cardnumber;
      if(i==1)
      {
          cardnumber = " First ";
      }
      else if(i==2)
      {
          cardnumber = " Second ";
      }
      else if(i==3)
      {
          cardnumber = " Third ";
      }
      else if(i==4)
      {
          cardnumber = " Fourth ";
      }
      else if(i==5)
      {
          cardnumber = " Fifth ";
      }
        
        score+=b.convert_decktype_face(cardptr);
        cout<<"The"<<cardnumber<<"card you have got is: ";
        cout<<((cardptr)).getface() + " of " + ((cardptr)).getsuit();
        cout<<endl;
        cout<< "The Total score of the corresponding cards is: ";
        cout<<score;
        cout<<endl;
    }
}
void Black_Jack_Game::dealcard_dealer(int &score,Card cardptr,bool player,int &j)
{
    if(player==false)
      {
          j++;
          string cardnumber;
          if(j==1)
          {
              cardnumber = " First ";
          }
          else if(j==2)
          {
              cardnumber = " Second ";
          }
          else if(j==3)
          {
              cardnumber = " Third ";
          }
          else if(j==4)
          {
              cardnumber = " Fourth ";
          }
          else if(j==5)
          {
              cardnumber = " Fifth ";
          }
           
           score+=b.convert_decktype_face(cardptr);
           cout<<"The"<<cardnumber<<"card the dealer has got is: ";
           cout<<((cardptr)).getface() + " of " + ((cardptr)).getsuit();
           cout<<endl;
           cout<< "The Total score of the corresponding cards is: ";
           cout<<score;
           cout<<endl;
        }
}

void Black_Jack_Game::play()
{
      cout<<"********************************************"<<endl;
      cout<<" ******************************************"<<endl;
      cout<<"    *************************************"<<endl;
      cout<<"      *****!!!!BLACKJACK GAME!!!!*****"<<endl;
      cout<<"    *************************************"<<endl;
      cout<<" ******************************************"<<endl;
      cout<<"********************************************"<<endl;
    cout<<endl;
    cout<<endl;
    b.populate();
    b.shuffle();
    int dealerscore=0;
    int playerscore=0;
    int Playerchoice=0;
    int Dealerchoice=0;
    int i=0;
    int j=0;
    char choice;
    Card p=b.deal();
    dealcard_player(playerscore, p, true,i);
    Card p1=b.deal();
    dealcard_player(playerscore, p1, true,i);
    while (true)
    {
        if(playerscore>21 && Playerchoice<=5)
        {
            cout<<"BUST!! YOU HAVE LOST THE GAME!!!!THE BANK HAS WON!!"<<endl;
            no_of_rounds++;
            rounds_lost++;
            break;
        }
        else if(playerscore==21 && Playerchoice<=5)
        {
            cout<<"Congratulations!! YOU HAVE WON THE GAME!!!"<<endl;
            no_of_rounds++;
            rounds_won++;
            break;
        }
        else if(playerscore<21 && Playerchoice<=5)
        {
            choice=getPlayerchoice();
            Playerchoice++;
            if(choice=='t')
                {
                    Card p2=b.deal();
                    dealcard_player(playerscore, p2, true, i);
                }
            else if(choice=='s')
                {
                    break;
                }
        }
            else if(Playerchoice>5)
            {
                cout<<"YOU DREW TOO MANY CARDS!!! YOU HAVE LOST"<<endl;
                no_of_rounds++;
                rounds_lost++;
            }
    }
    if(choice=='s')
    {
        cout<<endl;
        cout<< "                        DEALERS TURN                   "<<endl;
        Card p3=b.deal();
        dealcard_dealer(dealerscore, p3, false, j);
        Card p4=b.deal();
        dealcard_dealer(dealerscore, p4, false, j);
    }
    while (choice=='s')
    {
        if(dealerscore>21 && Dealerchoice<=5)
            {
                cout<<"THE PLAYER HAS WON THE GAME"<<endl;
                no_of_rounds++;
                rounds_won++;
                break;
            }
        else if(dealerscore==21 && Dealerchoice<=5)
            {
                cout<<"THE DEALER HAS WON!!!"<<endl;
                no_of_rounds++;
                rounds_lost++;
                break;
            }
        
        Dealerchoice++;
        
        if(dealerscore<=playerscore && Dealerchoice<=5)
            {
                cout<<"The dealer draws another card..."<<endl;
                Card p5=b.deal();
                dealcard_dealer(dealerscore, p5, false, j);
            }
        else if(dealerscore>playerscore && Dealerchoice<=5 &&dealerscore<=21)
            {
                cout<<"BUST!! DEALER HAS WON THE GAME!!!"<<endl;
                no_of_rounds++;
                rounds_lost++;
                break;
            }
    }
}
void Black_Jack_Game::Round_Stats()
{
    cout<<"      These are the round statistics       "<<endl;
    cout<<"The no of rounds played is: "<<no_of_rounds<<endl;
    cout<<"The no of rounds won is: "<<rounds_won<<endl;
    cout<<"The no of rounds lost is: "<<rounds_lost<<endl;
    
    
}
