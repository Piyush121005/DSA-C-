#include <iostream>
using namespace std;

int main(){
    //Lecture 3
    
/*
    //Program 1
    int a = 9;
    if(a==9){
        cout<<"Niney"<<endl;
    }
    if(a>0){
        cout<<"Positive"<<endl;
    }else{
        cout<<"Negative"<<endl;
    }
*/

/*
    //Program 2
    char ch;
    cout<<"Enter the value of character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"this is uppercase"<<endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"This is numeric"<<endl;
    }
*/

/*
//Program 3
//Find the sum of all even numbers from 0 to N. and all odd numbers from 0 to N

//part1
int n;
cout<<"Enter the value of N"<<endl;
cin>>n;
int i=1;
int sum = 0;
while(i!=n+1){
    if(i%2==0){
    sum = sum+i;
    i++;
    }
    else{
        i++;
    }
}
cout<<"The sum of all even numbers from 0 to "<<n<<" is: "<<sum<<endl;

//part 2
int j=1;
int Sum = 0;
while(j!=n+1){
    if(j%2!=0){
        Sum = Sum+j;
        j++;
    }
    else{
        j++;
    }
}
cout<<"The sum of all odd numbers from 0 to "<<n<<" is: "<<Sum<<endl;
*/

/*
//Program 4
//Farenheit to Celsius program
float temp;
cout<<"Enter the temperature in Farehneit: ";
cin>>temp;
float ctemp;
ctemp = (temp-32)*5/9;
cout<<"Temperature in Celsius is: "<<ctemp<<endl;
*/

/*
//Program 5
//Farenheit to Celsius table with user defined gap of celsius.
float temp1,temp2;
cout<<"Enter the starting and ending temperature in Farehneit: ";
cin>>temp1>>temp2;
float r;
cout<<"Enter the range: ";
cin>>r;
float ctemp;
while(temp1<temp2+r){
    ctemp = (temp1-32)*5/9;
    cout<<temp1<<" "<<ctemp<<" "<<endl;
    temp1 = temp1+r;
}
*/

//Program 6
//Write all the numbers from 2 to N.
int n;
cout<<"Enter the value of N: ";
cin>>n;
int i=2;
while(i<n){
    if(n%i==0){
        cout<<"Not prime for "<<i<<endl;
    }
    else{
    cout<<"Prime for "<<i<<endl;
    }
        i++;
}
    return 0;
}