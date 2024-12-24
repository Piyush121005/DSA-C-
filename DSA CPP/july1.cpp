#include <iostream>
using namespace std;
/*
	void rearrange(int arr[], int n) {
		int i = 0;
		int j = 0;
		while(j<n){
			int j = i+2;
			if(arr[i]<0 &&arr[j]>=0){
				if(arr[i+1]<0){
					swap(arr[i+1],arr[j]);
					i++;
					j++;
				}
			}else if(arr[i]>=0&&arr[j]<0){
				if(arr[i+1]<0){
					swap(arr[i],arr[i+1]);
					i++;
					j++;
				}
			}
		}
	}
	*/
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
/*

void update(int **p)
{
	// p = p+1;
	//*p = *p+1;

	**p = **p + 1;
}
*/

/*MCQ Function part.
/* 18
void update(int *p){
	*p = (*p) * 2; 
*/

/*
void increment(int** p){
	++(**p);
}
*/
int main()
{
	/*
	int arr[] = {9, 4 ,-2 ,-1 ,5 ,0 ,-5 ,-3, 2};
	int n = 9;
	printArray(arr,n);
	rearrange(arr,n);
	printArray(arr,n);
	*/
	/*
			
		int i = 5;
		int *ptr1 = &i;
		int **ptr2 = &ptr1;

		cout << "The value of i is: " << i << endl;
		cout << "The value of i is: " << *ptr1 << endl;
		cout << "The value of i is: " << **ptr2 << endl;
		cout << "The address of i is: " << &i << endl;
		cout << "The address of i is: " << &(*ptr1) << endl;
		cout << "The address of i is: " << &(**ptr2) << endl;
		cout<<"The address of i is: "<<*ptr2<<endl;
		cout<<"The value of ptr1 is: "<<ptr1<<endl;
		cout<<"The address of ptr1 is: "<<&ptr1<<endl;
		cout<<"The address of ptr1 is: "<<&(*ptr2)<<endl;
		cout<<"The value of ptr 2 is: "<<ptr2<<endl;
		cout<<"The address of ptr2 is: "<<&ptr2<<endl;
		update(ptr2);
		cout<<"The value of i is : "<<i<<endl;
		cout<<"The value of ptr1 is :"<<ptr1<<endl;
		cout<<"The value of ptr2 is :"<<ptr2<<endl;
*/

	// MCQS = 15/21

	/* 1
	int first = 8;
	int second = 18;
	int* ptr = &second;
	*ptr = 9;
	cout<<first<<" "<<second<<endl;
	*/

	/*2
	int first = 6;
	int* p= &first;
	int*q = p;
	(*q)++;
	cout<<first<<endl;
	*/

	/*3
	int first = 8;
	int* p= &first;
	cout<<(*p)++<<" ";
	cout<<first<<endl;
	*/

	/*4
	int*p = 0;
	int first = 110;
	*p = first;
	cout<<p<<endl;
	*/

	/*5
	int first = 8;
	int second = 11;
	int* third = &second;
	first = *third;
	*third = *third+2;
	cout<<first<<" "<<second<<endl;
	*/

	/* 6
	float f = 12.5;
	float p = 21.5;
	float* ptr = &f;
	(*ptr)++;
	*ptr = p;
	cout<<*ptr<<" "<<f<<" "<<p<<endl;
	*/

	/* 7
	int arr[5];
	int *ptr;
	cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
	*/

	/* 8
	int arr[] = {11,21,13,14};
	cout<<*(arr)<<" "<<*(arr+1)<<endl;
	*/

	/* 9
	int arr[6] = {11,12,31};
	cout<<arr<<" "<<&arr<<endl;
	*/

	/* 10
	int arr[6] = {11,21,13};
	cout<<(arr+1)<<endl;
	*/

	/* 11
	int arr[6] = {11,21,31};
	int* p = arr;
	cout<<p[2]<<endl;
	*/

	/* 12
	int arr[] = {11,12,13,14,15};
	cout<<*arr<<" "<<*(arr+3);
	*/

	/*13
	 int arr[] = {11,21,31,41};
	 int* ptr = arr++;
	 cout<<*ptr<<endl;
	 */

	/*14
	char ch = 'a';
	char *ptr = &ch;
	ch++;
	cout << *ptr << endl;
	*/

/* 15
char arr[] = "abcde";
char* p = &arr[0];
cout<<p<<endl;
*/

/* 16
char arr[] = "abcde";
char*p = &arr[0];
p++;
cout<<p<<endl;
*/

/* 17
char str[] = "babbar";
char* p = str;
cout<<str[0]<<" "<<p[0]<<endl;
*/

/* 18
int i = 10;
update(&i);
cout<<i<<endl;
*/

/* 19
int first = 110;
int* p = &first;
int** q = &p;
int second = (**q)++ + 9;
cout<<first<<" "<<second<<endl;
*/

/* 20
int first = 100;
int* p = &first;
int** q = &p;
int second = ++(**q);
int* r = *q;
++(*r);
cout<<first<<" "<<second<<endl;
*/

/* 21
int num = 110;
int* ptr = &num;
increment(&ptr);
cout<<num<<endl;
*/
	return 0;
}