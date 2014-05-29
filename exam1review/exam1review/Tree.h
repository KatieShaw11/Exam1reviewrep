//
//  Tree.h
//  exam1review
//
//  Created by katie joy shaw on 5/28/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __exam1review__Tree__
#define __exam1review__Tree__

#include <iostream>
#include <string>
using namespace std;

class Tree
{
public:
    Tree();
    Tree (string Name, int Rate);
    void IncrementAge(); //the tree just had a bday
    int GetAge(); // returns the current age of the tree in years.
    int GetHeight(); // returns the current height of the tree.
    string GetName(); // returns the name of your tree
    
private: //instance variables
    int age;
    string name;
    double rate;
};

#endif /* defined(__exam1review__Tree__) */
