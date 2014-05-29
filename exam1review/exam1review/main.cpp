//
//  main.cpp
//  exam1review
//
//  Created by katie joy shaw on 5/28/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include <iostream>
#include <string>
#include "Tree.h"
#include "Park.h"
using namespace std;

const int BirchRate = 6;
const int ElmRate = 3;
const int TreeCount = 2;
void checkTrees(Park& park, Tree trees[], int size, int rate, int years);
void showTree(Park& park, string name);

int main(int argc, const char * argv[])
{
    Tree birchTrees[] = {Tree("Alice Smith", BirchRate), Tree("Jill Jones", BirchRate)};
    Tree elmTrees[] = {Tree("Joan Elias", ElmRate), Tree("Mary Allan", ElmRate)};
    Park closePark("holmberg");
    
    for (int t = 0; t < TreeCount; t++)
    {
        closePark.AddTree(birchTrees[t]);
        closePark.AddTree(elmTrees[t]);
    }
    
    for (int i = 0; i < 20; i++)
    {
        Tree tree;
        closePark.IncrementTreeAge(); // Grow trees grow!
        checkTrees(closePark, birchTrees, TreeCount, BirchRate, i + 1);
        checkTrees(closePark, elmTrees, TreeCount, ElmRate, i+1);
    }
    
    for (int t = 0; t < TreeCount; t++)
    {
        showTree(closePark, birchTrees[t].GetName());
        showTree(closePark, elmTrees[t].GetName());
    }
    
}

void checkTrees (Park& park, Tree trees[], int size, int rate, int years)
{
    Tree tree;
    for (int t = 0; t < size; t++)
    {
        bool found = park.GetTree (trees[t].GetName(), tree);
        if (!found)
            cout << "Error: tree " << trees[t].GetName() << " not found.\n";
        else
        {
            int annualGrowth = tree.GetHeight();
            if (annualGrowth <= 0 || annualGrowth < rate*years)
            {
                cout << "Error in your Grow method! Your tree grew to ";
                cout << annualGrowth << " feet in " << years << " years\n";
            }
        }
    }
}

void showTree (Park& park, string name)
{
    Tree tree;
    park.GetTree(name, tree);
    cout << tree.GetName() << " and she is ";
    cout << tree.GetAge() << " years old. ";
    cout << "She is " << tree.GetHeight() << " feet tall!\n\n";
}













