#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int sum = 0;
    int prod = 1;
    int rem;
    while (n > 0)
    {
        rem = n%10;
        sum = sum + rem;
        prod = prod * rem;
        n = n / 10;
    }
    int ans = prod - sum;
    return ans;
}

int main()
{
    /*
    int a = 5;
    int b = 7;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<~a<<"  "<<~b<<endl;
    cout<<(a^b)<<endl;
    cout<<(17<<2)<<endl;
    cout<<(19>>1)<<endl;
*/
    /*
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    int ans = (n*(n+1))/2;
    if(sum == ans){
        cout<<"The ans is: "<<ans;
    }
    else{
        cout<<"The formula is wrong!";
    }
    */
int ans =  subtractProductAndSum(234);
cout<<ans;
    return 0;
}