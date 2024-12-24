#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
void sorting(int arr[], int n)
{
	int newArr[n];
	int z = 0, o = 0, t = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			z++;
		}
		else if (arr[i] == 1)
		{
			o++;
		}
		else
		{
			t++;
		}
	}
	for (int i = 0; i < z; i++)
	{
		newArr[i] = 0;
	}
	for (int i = z; i < o + z; i++)
	{
		newArr[i] = 1;
	}
	for (int i = z + o; i < z + o + t; i++)
	{
		newArr[i] = 2;
	}
	printArray(newArr, n);
}
int linearSearch(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return i + 1;
		}
	}
	return INT8_MIN;
}
int binarySearch(int arr[], int n, int key)
{
	int start = 0;
	int end = n - 1;
	int mid = start + (end-start) / 2;
	while (start <= end)
	{
		if (key < arr[mid])
		{
			end = mid - 1;
		}
		else if (key > arr[mid])
		{
			start = mid + 1;
		}
		
		else if(key == arr[mid]) 
		{
			return mid;
		}
		mid = start + (end-start) / 2;
	}
		return INT8_MIN;
}
int main()
{
	/*
	int a = 7;
	int b = 13;
	cout<<(a&b)<<endl;
	*/
	// Restart from 38minutes
	// done
	/*
		int n;
		cin>>n;
		int arr[n];
		cout<<"Enter the elements of array: ";
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		printArray(arr,n);
		cout<<endl;
		int key;
		cout<<"Enter the value of key : ";
		cin>>key;
		//sorting(arr,n);
		int ans = linearSearch(arr,n,key);
		if(ans>-5000){
		cout<<"Your key is present on the index "<<ans<<endl;
		}
		else{
			cout<<"key not fount! "<<endl;
		}
		*/
	int n;
	cout<<"Enter array size: ";
	cin >> n;
	int arr[n];
	cout << "Enter the elements of array: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	printArray(arr, n);
	cout << endl;
	int key;
	cout << "Enter the value of key : ";
	cin >> key;
	int ans = binarySearch(arr,n,key);
	cout<<"Your key is present on: "<<ans+1<<" index."<<endl;
	return 0;
}
