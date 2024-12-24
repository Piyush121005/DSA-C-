#include<iostream>
#include<math.h>
using namespace std; 

int binary(long long N,int i,long long ans){
	if(N==0){
		return ans;
	}
	int bit = N&1;
	ans+= bit* pow(10,i);
	N = N>>1;
    cout<<"number is: "<<N<<endl;
    cout<<"bit is: "<<bit<<endl;
	i++;
	return binary(N,i,ans);
}

bool palindrome(string str,int start,int end){
	if(start<=end){
		return true;
	}
	char s = str[start++];
	char e = str[end--];
	if(s!=e){
			return false;
	}
	return palindrome(str,start,end);
}

bool checkPalindrome(long long N)
{
	int bin = binary(N,0,0);
    cout<<"binary is:"<<bin<<endl;
	string str = to_string(bin);
    cout<<"string is: "<<str;
	int n = str.length()-1;
	return palindrome(str,0,n);
}

int main(){ 

    binary(500,0,0);
    checkPalindrome(500);

return 0;

}