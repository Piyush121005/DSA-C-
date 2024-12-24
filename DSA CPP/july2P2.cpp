#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int start)
{
    if (start > n)
    {
        return;
    }
    int minInd = start;
    for (int i = start + 1; i <= n; i++)
    {
        if (arr[i] < arr[minInd])
        {
            minInd = i;
        }
    }
    swap(arr[start], arr[minInd]);
    selectionSort(arr, n, start + 1);
}
void bubbleSort(int arr[], int n, int start)
{
    if (start >= n)
    {
        return;
    }
    for (int i = start - 1; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1, start);
}
void insertionSort(int arr[], int n, int start)
{
    if (start == n)
    {
        return;
    }
    int temp = arr[start];
    int i = start - 1;
    for (; i >= 0; i--)
    {
        if (arr[i] > temp)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            break;
        }
    }
    arr[i + 1] = temp;
    insertionSort(arr, n, start + 1);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int len1 = mid-start+1;
    int len2 = end - mid;
    int* first = new int[len1];
    int* second = new int[len2];

    int k = start;
    for(int i= 0;i<len1;i++){
        first[i] = arr[k++];
    }
    k = mid+1;
        for(int i= 0;i<len2;i++){
        second[i] = arr[k++];
    }
    int index1 = 0;
    int index2 = 0;
    k = start;
    while(index1<len1&&index2<len2){
        if(first[index1]<=second[index2]){
            arr[k++] = first[index1++];
        }else{
            arr[k++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[k++] = first[index1++];
    }
    while(index2<len2){
        arr[k++] = second[index2++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}
int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int count = 0;
    for(int i= start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int PI = start+count;
    swap(arr[PI],arr[start]);
    int i=start,j=end;
    while(i<PI&&j>PI){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<PI&&j>PI){
            swap(arr[i++],arr[j--]);
        }
    }
    return PI;
}
void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}



void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main()
{
    int arr[6] = {17, 25, 9, 34, 28, 32};
   printArr(arr, 6);
    // selectionSort(arr,5,0);
    // bubbleSort(arr,5,1);
    // insertionSort(arr,6,1);
   mergeSort(arr, 0, 5);
     printArr(arr,6);
    //quickSort(arr,0,5);

    return 0;
}