#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// BAD PRACTICE
/*
int& func(int a){
    int num = a;
    int&ans = num;
    return ans;
}
int* fundu(int n){
    int* ptr = &n;
    return ptr;
}
*/

bool subArrayExists(int arr[], int n)
{
    // 4,6,3,4,6
    // 3,4,4,6,6
    vector<int> v;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            return true;
        sum += arr[i];
        cout << sum << endl;
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            return true;
        else if (v[i] == v[i + 1])
            return true;
    }
    return false;
}

// Recursion

int powe(int base, int pow)
{
    if (pow == 0)
        return 1;
    base = powe(base, pow - 1) * base;
    return base;
}
int facto(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    n = n * facto(n - 1);
}
void printN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printN(n - 1);
}
void SecprintN(int n, int limit)
{
    if (n == limit + 1)
    {
        return;
    }
    cout << n << " ";
    SecprintN(n + 1, limit);
}
void reachHome(int src, int dest)
{
    cout << "Source: " << src << " Destination: " << dest << endl;
    if (src == dest)
    {
        cout << "Reached Home." << endl;
        return;
    }
    reachHome(src + 1, dest);
}
int fibbo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        int fib = fibbo(n - 1) + fibbo(n - 2);
        return fib;
    }
}
void SayDigit(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    SayDigit(n, arr);
    cout << arr[digit] << " ";
}
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }else if(arr[0]>arr[1]){
        return false;
    }else{
    bool ans = isSorted(arr+1,size-1);
    return ans;
    }
}

int Getsum(int arr[],int size){
    if(size==0){
        return 0;
    }else if(size==1){
        return arr[0];
    }else{
       int sum = arr[0]+ Getsum(arr+1,size-1);
       return sum;
    }
}
int linearSearch(int arr[],int size,int key){
    if(size==0){
        return 0;
    }else if(arr[0]==key){
        return 1;
    }
    else{
        linearSearch(arr+1,size-1,key);
    }
}

int binarySearch(int arr[],int size,int start,int end,int key){
    int mid = (start+end)/2;
    if(size==0){
        return 0;
    }else if(arr[mid]==key){
        return 1;
    }else if(arr[mid]<key){
        start = mid+1;
        size = (end-start)+1;
        return binarySearch(arr,size,start,end,key);
    }else{
        end = mid-1;
        size = (end-start)+1;
        return binarySearch(arr,size,start,end,key);
    }
}

int main()
{
    /*
    int n;
    cin>>n;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    //creation done.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //input done.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    /*
       //row and column declaration and taking them as input
        int row, column;
        cin >> row >> column;
    //creating 2D array
        int **arr = new int *[row];
        for (int i = 0; i < row; i++)
        {
            arr[i] = new int[column];
        }
    //Taking input in 2D array
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                cin>>arr[i][j];
            }
        }
        cout<<endl;
    //Giving output from 2D array
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }

        //Deleting the space from the heap after using it so that memory can be released.
        for(int i=0;i<row;i++){
            delete[]arr[i];
        }
        delete[]arr;
        */
    // Jagged Array
    /*
    int** arr = new int*[3];
    arr[0] = new int[3];
    arr[1] = new int[4];
    arr[2] = new int[2];


    int sizes[] = {3,4,2};


    for(int i=0;i<3;i++){
     int ind = sizes[i];
     for(int j=0;j<ind;j++){
         cin>>arr[i][j];
     }
    }
    cout<<endl;
       for(int i=0;i<3;i++){
     int ind = sizes[i];
     for(int j=0;j<ind;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
    }
 */
    /*
    int num = 2;
    int pow = 10;
    cout<<"The power of "<<pow<<" of "<<num<<" is: "<<powe(num,pow);
    */
    /*
    int num = 6;
    cout<<"The factorial of number "<<num<<" is: "<<facto(num);
    */
    /*
    printN(15);
    cout<<endl;
    SecprintN(1,20);
    */
    /*
    int dest = 10;
    int src = 0;
    reachHome(src,dest);
    cout<<fibbo(7);
    int sum1 = 0,sum2=1,sum3=0;
    for(int i=1;i<7;i++){
        sum3 = sum1+sum2;
        sum1 = sum2;
        sum2 = sum3;
    }
    cout<<endl<<sum3;
    */
   /*
    string arr[10] = {"Zero ", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
    SayDigit(7405, arr);
    */
   /*
   int arr[] = {11,19,24,55,64};
   int n = 5;
   if(isSorted(arr,5)){
    cout<<"The given array is sorted"<<endl;
   }else{
    cout<<"The given array is not sorted"<<endl;
   }
   cout<<"The sum of the array is: "<<Getsum(arr,n)<<endl;
   if(linearSearch(arr,n,24)){
    cout<<"The given element is present in the array! ";
   }else{
    cout<<"The given element is not present in the array! ";
   }
   */
  /*
  int array[] = {11,17,24,35,39,51,60,66};
  int n = 8;
  int start = 0;
  int end = 7;
  if(binarySearch(array,n,start,end,60)){
    cout<<"The given element is present in the array! ";
   }else{
    cout<<"The given element is not present in the array! ";
   }
   */
    return 0;
}