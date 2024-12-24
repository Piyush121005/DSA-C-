#include <iostream>
using namespace std;

int main(){
    //Lecture 1

    /*
    //program 1
    // calculate Si 
    int p,r,t;
    cout<<"Enter the principle,rate and time! "<<endl;;
    cin>>p>>r>>t;
    int si = (p*r*t)/100;
    cout<<"Your Simple interest for the given value is: "<<si<<endl;
    */


   /*
   //Program 2
   // Find average f 3 numbers
   float a,b,c;
   cout<<"Enter the three numbers! "<<endl;
   cin>>a>>b>>c;
   float avg = (a+b+c)/3;
   cout<<"The average of 3 number given is: "<<avg<<endl;
   */

  /*
  //program 3
  //To check if a<b
  int a,b;
  cout<<"Enter the value of a and b"<<endl;
  cin>>a>>b;
  if(a<b){
    cout<<"a is less than b";
  }
  else{
    cout<<"a is not less than b";
  }
  */
/*
 //Program 4
 //Check if the number is even or odd

 int a;
 cout<<"Enter the value of a"<<endl;
 cin>>a;
 if(a%2==0){
  printf("Even number");
 }
 else{
  cout<<"Odd number";
 }
 */

/*
//Program 5
//Check if the number is smaller,grater or equal to zero
int n;
cout<<"Enter the number"<<endl;
cin>>n;
if(n>0){
  printf("The number is positive! ");
}
else if(n<0){
  cout<<"The number is negative";

}
else{
  cout<<"The number is equal to zero";
}
*/

/*
//Program 6
//Check if the triangle is valid or not.
int a,b,c;
cout<<"Enter the sides of the triangle!"<<endl;
cin>>a>>b>>c;
if((a+b>c) && (b+c>a) &&(c+a>b)){

  cout<<"The triangle is valid! "<<endl;
    }
else{
  cout<<"The triangle is not valid"<<endl;
}
*/

/*
//Program 7
//Print 1 to N with loop
int n;
cout<<"Enter the value of N ";
cin>>n;
int i = 1;
while(i<n+1){
  cout<<i<<" ";
  i++;
}
*/

/*
//Program 8
//Sum of 1 to N
int n;
int i = 1;
int sum = 0;
cout<<"Enter the value of N"<<endl;
cin>>n;
while(i<n+1){
  sum = sum+i;
  i++;
}
cout<<"The sum from 1 to N is: "<<sum<<endl;
*/

/*
//Program 9
//Factorial of N
int n;
int i = 1;
int fact =1;
cout<<"Enter the value of N"<<endl;
cin>>n;
while(i<n+1){
  fact = fact*i;
  i++;
}
cout<<"The fact of N is: "<<fact<<endl;
*/

/*
//Program 10
//Check if a number is prime or not

int num;
int flag = 1;
cout<<"Enter the number: ";
cin>>num;
for(int i=2;i<num;i++){
  if(num%i==0){
    cout<<"Non Prime";
    flag = 0;
    break;
  }
}
if(flag==1){
  cout<<"Prime number"<<endl;
}
*/

/*
//With while loop

int num;
int flag = 1;
cout<<"Enter the number: ";
cin>>num;
int i =2;
while(i!=num){
  if(num%i==0){
    cout<<"Non prime";
    flag =0;
    break;
  }
  else{
    i++;
  }
}
if(flag){
  cout<<"Prime Number";
}
*/
//Lecture 2
int a = 25254;
int size = sizeof(a);
cout<<size<<endl;
char b = a;
cout<<b;
 return 0;
}
