#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    // 1. GCD/HCF =(a-b,b)
    // 2. GCD/HCF = (a%b,b).
    // 3. lcm(a,b) * gcd(a,b) = a*b.
    if (a == b)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}
void rotate(int arr[], int n)
{
    int a[n];
    for (int i = 1, j = 0; i <= n, j < n; i++, j++)
    {
        a[j] = arr[n % i];
        cout << "Arr :" << n % i << "Value is: " << arr[n % i] << endl;
        ;
        cout << "A: " << j << "Value is: " << a[j] << endl;
        ;
    }
    for (int k = 0; k < n; k++)
    {
        arr[k] = a[k];
    }
}
void print(int *p)
{
    cout << "Printing the address of variable: " << p << endl;
    cout << "Printing the address of given pointer: " << &p << endl;
    cout << "Printing the value of given pointer: " << *p << endl;
    cout << "Manupulating the value: " << endl;
}
void update(int *p){
        *p = 18;
    cout << "Printing the value of given pointer: " << *p << endl;
}
int getsum(/*int arr[]*/int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
    }
    return sum;
}
int main()
{
    /*
    int n = 8;
    int arr[n] = {1 ,-1 ,3 ,2 ,-7 ,-5 ,11 ,6};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
int count =0;
        int a[n];
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                a[count] = arr[i];
                cout<<a[count]<<" ";
                count++;
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                a[count] = arr[i];
                cout<<a[count]<<" ";
                count++;
            }
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            arr[i] = a[i];
            cout<<arr[i]<<" ";
        }
*/
    // Mathamatics For DSA
    /*
        int a,b;
        cout<<"Enter the values of a and b: ";
        cin>>a>>b;
        int ans = gcd(a,b);
        cout<<"The GCD/HCF of "<<a<<" and "<<b<<" is: "<<ans<<endl;
        */
    /*
   int arr[] = {1,2,3,4,5};
   int n = 5;
   rotate(arr,n);
   */
    // Pointers......!!!
    // pointer stores the address of a variable.
    /*
    int num = 5;
    cout << "The value of num is: " << num << endl;
    cout << "The address of num is: " << &num << endl;
    int num1 = 8;
    cout << "The value of num1 is: " << num1 << endl;
    cout << "The address of num1 is: " << &num1 << endl;
        int num2= 12;
    cout << "The value of num2 is: " << num2 << endl;
    cout << "The address of num2 is: " << &num2 << endl;
    int num3 = 19;
    cout << "The value of num3 is: " << num3 << endl;
    cout << "The address of num3 is: " << &num3 << endl;
        int num4 = 29;
    cout << "The value of num4 is: " << num4 << endl;
    cout << "The address of num4 is: " << &num4 << endl;
    */
    /*
    int i = 55;
    int *ptr = &i;
    cout << "The value of i is: " << i << endl;
    cout << "The address of i is: " << &i << endl;
    cout<<"The value of ptr is: "<<ptr<<endl;
    cout<<"The address of ptr is: "<<&ptr<<endl;
    cout<<"The size of int variable is: "<<sizeof(i)<<endl;
    cout<<"The size of int pointer is: "<<sizeof(ptr)<<endl;
    (*ptr)++;
    cout<<"The value of i is: "<<*ptr<<endl;
    */

    // Playing with pointers in array.
    /*
        int arr[10];
        arr[0] = 17;
        arr[1] = 88;
        cout << "The address of first memory block is: " << arr << endl;
        cout << "The value of first memory block is: " << *arr << endl; // this will add 1 to 17 and not give the second value of array.
        cout << "The value of first memory block is: " << *arr + 1 << endl;
        cout << "The address of first memory block is: " << &(arr[0]) << endl;
        cout << "The value of first memory block is: " << arr[0] << endl;
        cout << "The value of first memory block is: " << *(&arr[0]) << endl;
        cout << "The value of second memory block is: " << *(&arr[0] + 1) << endl;
        cout << "The value of second memory block is: " << *(arr + 1) << endl;
        int *ptr = arr;
        cout<<"The pointer pointing towards the value: "<<*ptr<<endl;
        cout<<"The value of pointer is the address of the value which it is holding: "<<ptr<<endl;
        cout<<"The address of the pointer is: "<<&ptr<<endl;
        ptr = ptr+1;
        cout<<"The value of pointer is the address of the value which it is holding: "<<*ptr<<endl;
        cout<<"The value of ptr is: "<<ptr<<endl;
        cout<<"The address of arr[1] is: "<<&arr[1]<<endl;
        //formula from the above play is:
        // arr[i] = *(arr+i).
        //or
        //i[arr] = *(i+arr).
    */
    // Character array.
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";
    cout << "The address of first block of an array is : " << arr << endl;
    cout << "The value of ch is: " << ch << endl;
    cout << "the address of ch is: " << &ch << endl;
    cout << "The size of first block of character array is: " << sizeof(ch[0]) << endl;
    cout << "The size of ch is: " << sizeof(ch) << endl;
    char *c = &ch[0];
    cout << "The value of address character array is: " << *c << endl;
    cout << "The address of pointer character array is: " << &c << endl;
    */
    // Pointers And Functions.
    /*
    int value = 5;
    int *ptr = &value;
    print(ptr);
    update(ptr);
    cout<<"Checking if the value is updated not not: "<<value<<endl;
    */
   int arr[5] = {1,2,3,4,5};
   cout<<"Sum is: "<<getsum(arr,5)<<endl;
   cout<<"Size of arr is: "<<sizeof(arr)<<endl;
    return 0;
}