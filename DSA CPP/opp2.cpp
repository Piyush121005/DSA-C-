#include <iostream>
using namespace std;
/*Single Inheritence*/
//Here one class is the parent class and other class is the child class.
/*
class Animal {
    public:
    int age;
    int weight;
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Dog: public Animal{
};
*/
/* Multi Level Inheritence */
//Here one class is the parent class of another class and that class is the parent of next class.
/*
class Animal {
    public:
    int age;
    int weight;
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Dog: public Animal{

};
class GermanShepher: public Dog{

};
*/
// Multiple Inheritence
//Here one class is the parent of 2 or more classes which are independent from each other
/*
class Animal {
    public:
    int age;
    int weight;
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Human{
    public:
    string color;
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class Hybrid: public Animal,public Human{
};
*/
/* Hierarchial Inheritence*/
//Here one class is the parent of more than one class and the other classes may also be the their child classes.
/*
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside function 2"<<endl;
    }
};
class C: public A{
    public:
    void func3(){
        cout<<"Inside function 3"<<endl;
    }
};
*/
/*Hybrid Inheritence*/
//It is the combination of more than one type of inheritence.
/*
class A{
    public:
    void func1(){
        cout<<"Inside function 1"<<endl;
    }
};
class Animal {
    public:
    int age;
    int weight;
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Human{
    public:
    string color;
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class Hybrid: public Animal,public Human,public A{
};
*/

//Ambiguity
/*
class A{
    public:
    void func(){
        cout<<"Inside function 1"<<endl;
    }
};
class B:public A{
    public:
    void func(){
        cout<<"Inside function 2"<<endl;
    }
};
class C: public A{
    public:
    void func(){
        cout<<"Inside function 3"<<endl;
    }
};
*/
//Polymorphism: two types: 1.Function Overloading , 2.Operator Overloading.
//Compile time polymorphism is also known as static polymorphism.
//1.Function overloading. (in compile time polymorphism)
class A{
    public:
    void sayHello(){
        cout<<"HEllo Piyush Ji "<<endl;
    }
    void sayHello(string name){
        cout<<"HEllo  Ji "<<endl;
    }
};
//2.Operator overloading (in compile time polymorphism)
class B{
    public:
    int a;
    int b;
    int add(){
        a+b;
    }
    void operator +(B &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<"Output "<<val2-val1<<endl;
    }
    void  operator() () {
    cout<<" Mai Bracket hu "<<this->a<<endl;
};
};
//1.Function overloading. (in runtime polymorphism)
//Runtime polymorphism is also known as dynamic polymorphism.
//Here method overiding concept is used.
class Animal {
    public:
    void speak(){
        cout<<"Speak "<<endl;
    }
};
class Dog{
  public:
  void speak(){
    cout<<"Bark "<<endl;
  }  
};
int main()
{
    Dog d;
    d.speak();

    /*
    B object1,object2;
    object1.a = 4;
    object2.a = 7;
    object1+object2;
    object1();
    */
   /*
    A obj;
    obj.sayHello();
    /* Inheritence Ambiguity is resolved by '::' scope resolution*/
    return 0;
}