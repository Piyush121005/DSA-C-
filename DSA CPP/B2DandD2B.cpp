#include<iostream>
#include<math.h>
using namespace std;


int main() {
//Binary number to Decimal Number
/*
    int n;
    cin >> n;

    int i = 0, ans = 0 ;

    while( n != 0) {

        int digit = n % 10;

        if( digit == 1) {
            ans = ans + pow(2, i);
        }

        n = n/10;
        i++;

    }
    cout<< ans << endl;
    */
//Decimal to Binary.
    int n;
    cin >> n;
    if(n<0){
        n = n*(-1);
    }
    cout<<n<<endl;

    int ans  = 0;
    int i = 0;
    while(n != 0 ) {

        int bit  = n & 1;

        ans = (bit * pow(10, i) ) + ans;
        cout<<ans<<endl;

        n = n >> 1;
        i++;

    }

    cout<<" Answer is " << ans << endl;
    return 0;
}