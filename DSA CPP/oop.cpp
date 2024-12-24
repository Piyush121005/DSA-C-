#include<iostream>
#include"externalOpp.cpp" //including our external file to get the class which we have defined in the otehr file.
using namespace std; 
//Class is a user-defined template with the help of which we can make objects of that class.

/*
class Hero{
    //properties
    int health;
};
*/

int main(){ 
    //Creation of Object
    /*
    Hero h1;    
    h1.level = 'C';
    cout<<"Level is: "<<h1.level<<endl;
    cout<<"Size: "<<sizeof(h1)<<endl;
    cout<<"Size of level: "<<sizeof(h1.level)<<endl;
    */
   /*
   Hero h1; //Creating Object Statically
   h1.printLvl();
   h1.getLvl('D');
   h1.printLvl();
   Hero *b = new Hero;// Creating Object dynamically.

   (*b).getLvl('E');
   (*b).printLvl();
   //refrencing via arrow pointer.
   b->getLvl('G');
   b->printLvl();
   */

   //Constructor get invoked at the object creation time. It has no return type. It also does not have any input type.
   //default constructor is already creater.
   //The address of an object is stored in 'this' keyword. this is a pointer which points towards the current object.
   Hero piyush;
return 0;
}