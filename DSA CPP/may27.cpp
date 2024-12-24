#include <iostream>
using namespace std;

int main()
{
    /*
        //sum from 1 to n
        int n,sum=0;
        cout<<"Enter the value of n "<<endl;
        cin>>n;
        for(int i =0;i<n;i++){
            sum = sum+i;
        }
        cout<<sum<<endl;
    */
/*
    // print fibbonaci series

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int a = 0;
    int b = 1;
    int next = 0;
    cout<<0<<" ";
    for (int i = 1; i<n; i++)
    {
        cout<<b<<" ";
        next = a+b;
        a = b;
        b = next;
    }
*/
/*
//find if the numberis prime or not
int n;
cin>>n;
int flag = 1;
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"Not prime";
        flag = 0;
        break;
    }
}
if(flag ==1){
    cout<<"Prime number";
}
*/
/*
for(int i=0;i<5;i++){
    cout<<"Hey there! "<<endl;
    cout<<"Whats up?? "<<endl;
    if(i==2){
    continue;
    }
    cout<<"Have a good day"<<endl;
}
*/
for(int i=0;i<=15;i+=2){
    cout<<i<<" ";
    if(i&1){
        continue;
    }
    i++;
}
for(int i=0;i<5;i++){
    for(int j=i;j<=5;j++){
        if(i+j==10){
            break;
        }
        cout<<i<<" "<<j<<endl;
    }
}
    return 0;
}