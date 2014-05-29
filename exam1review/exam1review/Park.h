//
//  Park.h
//  exam1review
//
//  Created by katie joy shaw on 5/28/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#ifndef __exam1review__Park__
#define __exam1review__Park__

#include <iostream>
#include <string>
#include "Tree.h"
#define MAXTREES 10
using namespace std;

class Park
{
public:
    Park (string Name);
    void AddTree (Tree& Tree);
    bool GetTree (string Name, Tree& tree);
    void IncrementTreeAge();
private:
    Tree trees[MAXTREES];
    int treesOccupied;
    string name;
    
    
};

#endif /* defined(__exam1review__Park__) */
