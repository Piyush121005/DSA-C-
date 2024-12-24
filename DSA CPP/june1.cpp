#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    cout<<"Printing the array! "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<"Printing done! ";
}
int sumArray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}
int linearSearch(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
}
void Reverse(int arr[],int n){
    int j = n-1;
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp; 
        j--;
    }
    printArray(arr,n);
}
void AlternateSwap(int arr[],int n){
    int temp;
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    }
    printArray(arr,n);
}
int main()
{
    /*
    int dost[] = {17,28,55,5};
    for(int i=0;i<4;i++){
        cout<<dost[i]<<" ";
    }
    */
   /*
    int arr[1000];
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = -27;
    }
    cout << arr[777] << " ";
    printArray(arr, 10);
    cout<<sizeof(arr);
    */
   //create an array of size n and find the maximum and minimum element in it.
/*
   int arr[11] = {8,21,24,19,3,25,77,54,7,80,60};
   int max = INT16_MIN;
   int min = INT16_MAX;
   for(int i=0;i<11;i++){
    if(arr[i]>max){
        max = arr[i];
    }
    if(arr[i]<min){
        min = arr[i];
    }
   }
   cout<<"The maximum and the minimum elements are: "<<max<<" "<<min<<" respectively. "<<endl;
   */
  /*
  int arr[5] = {27,86,41,69,11};
  int answer = sumArray(arr,5);
  cout<<"The sum is: "<<answer<<endl;
  int index = linearSearch(arr,5,11);
  cout<<"The index is "<<index<<endl;
  */
 /*
 int arr[6] = {11,80,34,67,52,99};
 printArray(arr,6);
 cout<<endl;
 Reverse(arr,6);
 */
 int arr[6] = {11,80,34,52,99};
 AlternateSwap(arr,5);
    return 0;
}