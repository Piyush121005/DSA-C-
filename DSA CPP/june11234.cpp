#include<iostream>
using namespace std;


int main(){
    /*
    int arr[7] = {27,22,98,13,50,32,20};
    int mini = INT16_MAX;
    int temp;
    for(int i=0;i<7;i++){
        for(int j=i;j<7;j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            }

        }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }   
    */
   int n = 2,m=2;
   int arr[n] = {3,2};
       long long sum = 0;
    for(int i=0;i<n;i++){
        if(i==m-1){
            continue;
        }
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}