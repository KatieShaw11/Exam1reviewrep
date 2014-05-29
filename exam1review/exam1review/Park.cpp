//
//  Park.cpp
//  exam1review
//
//  Created by katie joy shaw on 5/28/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//
#include "Park.h"
#include <string>



Park::Park (string Name)
{
    name = Name;
    treesOccupied = 0;
}
void Park::AddTree (Tree& Tree)
{
    trees[treesOccupied] = Tree;
    treesOccupied++;
}
bool Park::GetTree (string Name, Tree& tree)
{
    for (int i = 0; i < treesOccupied; i++)
    {
        if (Name == trees[i].GetName())
        {
            tree = trees[i];
            return true;
        }
    }
    return false;
}
void Park::IncrementTreeAge()
{
    for (int i = 0; i < treesOccupied; i++)
    {
        trees[i].IncrementAge();
    }
}


/*
Tree trees[MAXTREES];
int treesOccupied;*/