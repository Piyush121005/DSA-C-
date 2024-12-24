#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*
    //conversion from binary to decimal
    int n,i=0,ans=0,digit;
    cin>>n;
    while(n!=0){
        digit = n%10;
        if(digit==1){
        ans = ans+pow(2,i);
        }
        n = n/10;
        i++;
    }
    cout << ans << endl;
    */
   int n;
   cin>>n;
        if(n==0){
            return 1;
        }
        int mask = 0;
        int x = n;
        while(x!=0){
            mask = (mask << 1) | 1;
            x>>1;
        }
        int ans = (~n)&mask;
        cout<<ans;
    return 0;
}