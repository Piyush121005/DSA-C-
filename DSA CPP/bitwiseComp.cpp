#include <iostream>
using namespace std;
#include <math.h>

bool isPowerOfTwo(int n) {
        
        int ans = 1;
        
        for(int i = 0; i <= 30; i++) {
            
            //cout<<" ans "<<ans <<endl;
            if(ans == n)
            {
                return true;
            }
            if(ans < INT32_MAX/2)
            ans = ans * 2;   
            
        }
        return false;
    }


int main()
{
    int n;
    cin>>n;
    int m = n;
    int mask = 0;

    if (n == 0)
        return 1;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;

    cout<<" The ans is: "<<ans<<endl;
    return 0;
}