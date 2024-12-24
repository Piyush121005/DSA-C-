#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    //Decimal to Binary Supreme Code
    int n, ans = 0, i = 0;
    cin >> n;
    while (n != 0)
    {
        int digit = (n & 1);
        ans = ans+(digit * pow(10, i)) ;
        n = n >> 1;
        i++;
    }
    cout << "The ans is: " << ans << endl;
    */
    //Hw ques
    //Conversion of decimal to binary of negative numbers
    
    int n,digit,ans=0,i=0;
    cin>>n;
    n = n*(-1);
    while(n!=0){
        digit = (n & 1);
        ans = ans+digit*pow(10,i);
        n = n>>1;
        i++;
    }
    
    cout<<ans<<endl;
    
    return 0;
}