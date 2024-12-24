#include <iostream>
using namespace std;
class Hero
{
    char name[100];
    int health;
    char level;

public:
    Hero() //Now as we have created this constructor, the default constructor will get removed automatically.
    {
        cout << "Constructor called." << endl;
    }
    //Parameterised Consructor
    Hero(int health){
        health = health;// Here the value of health is been putted back to it.
        this->health = health; //Here the Value of health parameter is placed into the health variable of this  object. 
    }
    void printLvl()
    {
        cout << level << endl;
    }
    void getLvl(char lvl)
    {
        level = lvl;
    }
};