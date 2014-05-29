//
//  Tree.cpp
//  exam1review
//
//  Created by katie joy shaw on 5/28/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Tree.h"



Tree::Tree()
{
    rate = 1; // default rate (1 foot/year)
    name = "Sally"; // default name
    age = 0; // default age
}

Tree::Tree (string Name, int Rate)
{
    name = Name;
    rate = Rate;
}

void Tree::IncrementAge()
{
    age++;
}
int Tree::GetAge() // returns the current age of the tree in years.
{
    return age;
}

int Tree::GetHeight() // returns the current height of the tree.
{
    return age*rate;
}
string Tree::GetName() // returns the name of your tree
{
    return name;
}








