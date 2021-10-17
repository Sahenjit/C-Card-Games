//
//  Game.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp
#include <iostream>
class Game
{
public:
    Game();
    virtual void menu()=0;
    virtual void play()=0;
};

#endif /* Game_hpp */
