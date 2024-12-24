#include <iostream>
#include <stdlib.h>
using namespace std;

int ncr(int n, int r)
{
    int numerator = 1, denominator1 = 1, denominator2 = 1, denominator, ans;
    for (int i = 1; i <= n; i++)
    {
        numerator = numerator * i;
    }
    int a = n - r;
    for (int j = 1; j <= a; j++)
    {
        denominator1 = denominator1 * j;
    }
    for (int k = 1; k <= r; k++)
    {
        denominator2 = denominator2 * k;
    }
    denominator = denominator1 * denominator2;
    ans = numerator / denominator;
    return ans;
}
bool prime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        return true;
    }
    return false;
}
void printPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
    }
}
int ap(int n){
    int ans = (3*n)+7;
    return ans;
}
int setBits(int a,int b){
    int count = 0;
for(int i=0;i<32;i++){
    if(a&1==1){
        count++;
    }
    a = a>>1;
    if(b&1==1){
        count++;
    }
    b = b>>1;
}
return count;
}
void fibbo(int n){
    int a = 0,seq =0;
    int b = 1;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        seq = a+b;
        a = b;
        b = seq;
    }
}
int main()
{
    /*
int num = 2;
char ch = 'c';

while(1){
switch (num)
{
case 1:
    cout << "This is case one";
case 2:
    switch (ch)
    {
    case 'a':
        cout << "This is case 'a' which is a nested switch case of num = 2";
    case 'b':
        cout << "This is case 'b' which is a nested switch case of num = 2";
    case 'c':
        cout << "This is case 'c' which is a nested switch case of num = 2 ";
    }
default:
    cout << "This is a default case";
}
exit(1);
   }
   */

    /*
  // Total amount = 1330.Find number of 100RS note,50Rs note,20Rs note,1RS note using switch statement.

  int amount;
  cout << "Enter the amount: ";
  cin >> amount;
  int choice,hundered=0,fifty=0,twenty=0,one=0;
  while (amount != 0)
  {
      if (amount >= 100)
      {
          choice = 1;
      }
      else if (amount < 100 && amount >= 50)
      {
          choice = 2;
      }
      else if (amount < 50 && amount >= 20)
      {
          choice = 3;
      }
      else
      {
          choice = 4;
      }
      switch (choice)
      {
      case 1:
          hundered = amount / 100;
          amount = amount-(hundered*100);
          break;
      case 2:
          fifty = amount / 50;
          amount = amount-(fifty*50);
          break;
      case 3:
          twenty = amount / 20;
          amount = amount-(twenty*20);
          break;

      case 4:
          one = amount;
          amount = amount-(one*1);
      }
  }
  cout<<"Total number of hundered rupees note required = "<<hundered<<endl;
  cout<<"Total number of hundered rupees note required = "<<fifty<<endl;
  cout<<"Total number of hundered rupees note required = "<<twenty<<endl;
  cout<<"Total number of hundered rupees note required = "<<one<<endl;
  */
    // Functions
    /*
     int a = ncr(10,6);
     cout<<a<<endl;
     */
    /*
     int n;
     cin>>n;
     cout<<a<<endl;
     if(prime(n)){
         cout<<"The number is prime"<<endl;
     }
     else{
         cout<<"The number is not prime"<<endl;
     }
 */
/*
    int n;
    cin >> n;
    printPrime(n);
    */
   /*
    int n;
    cin >> n;
    int c = ap(n);
    cout<<c<<endl;
    */
   /*
    int a,b;
    cin >>a>>b;
    int cb = setBits(a,b);
    cout<<cb<<endl;
    */
   int n;
   cin>>n;
   fibbo(n);
    return 0;
}