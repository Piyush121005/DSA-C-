#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPresent(int arr[][4],int n,int m,int target){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
void rowWiseSum(int arr[][4],int n,int m){
    int sum =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is: "<<sum<<endl;
        sum = 0;
    }
}
int LargestRowSum(int arr[][4],int n,int m){
    int sum =0;
    int maxSum = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
        }
        maxSum = max(sum,maxSum);
        sum = 0;
    }
    return maxSum;
}

void rotate(int matrix[][3],int row) {
    reverse(matrix[0][0], matrix[row-1][2]);
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j)
            swap(matrix[i][j], matrix[j][i]);
    }
}
int main(){
        //2D Arrays:
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
 for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
 //reverse(arr[0][0],arr[3][3]);
  for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
/*
    int arr[3][4];
    cout<<"Enter the input values of 2D array!"<<endl;
    for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cin>>arr[i][j];
     }
    }
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
 */
 
    // Ways of initializing them manually :-

    // NUMBER !

    // ColumnWise:
    /*
    int arr2[3][4] = {2,4,7,14,21,9,18,27,11,22,15,30};
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
     cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    // RowWise:
    /*
        int arr2[3][4] = {2,4,7,14,21,9,18,27,11,22,15,30};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
     cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // Number 2
    /*
    int arr2[3][4] = {{5, 8, 3, 7}, {17, 15, 14, 18}, {20, 25, 24, 22}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    */
   /*
       int arr[3][4];
    cout<<"Enter the input values of 2D array!"<<endl;
    for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cin>>arr[i][j];
     }
    }
    cout<<"Your arrays is: "<<endl;
 for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){
         cout<<arr[i][j]<<" ";
     }
     cout<<endl;
 }
   int target;
   cout<<"Enter the element to search: ";
   cin>>target;
    if(isPresent(arr,3,4,target)){
        cout<<"Element found! "<<endl;
    }else{
        cout<<"Not found!";
    }
    rowWiseSum(arr,3,4);
    cout<<"The maximum row sum is: "<<LargestRowSum(arr,3,4)<<endl;
    */
   /*
   int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
   int row = 3;
        int col = 3;
        for(int i=0;i<row;i++){
            for(int j=col-1;j>=0;j--){
                cout<<matrix[j][i]<<" ";
            }
            cout<<endl;
        }
*/

    return 0;
}