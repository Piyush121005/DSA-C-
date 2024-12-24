#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int j=0;j<n;j++){
    for(int i=0;i<n-j-1;i++){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    }
    cout<<"Your updated array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}