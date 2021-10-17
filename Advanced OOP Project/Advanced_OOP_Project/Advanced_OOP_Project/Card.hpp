//
//  Card.hpp
//  Advanced_OOP_Project_new
//
//  Created by Shankar on 04/04/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Card
{
    private:
        string face;
        string suit;
    public:
        Card();
        Card(string,string);
        string getface();
        string getsuit();
        void setface(string);
        void setsuit(string);

};
#endif /* Card_hpp */
