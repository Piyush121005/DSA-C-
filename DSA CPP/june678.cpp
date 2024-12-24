#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int bSearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}
int firstOccurence(int arr[], int n, int k)
{
    int ans1 = -1;
    ;
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (arr[mid] < k)
        {
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else if (arr[mid] == k)
        {
            ans1 = mid;
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans1;
}
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else if (arr[mid] < arr[0])
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}
long long int Sqrtinteger(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        long long int prod = mid * mid;
        if (n == prod)
        {
            return mid;
        }
        else if (n > prod)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}
bool isPossible(int arr[],int n,int m,int mid){
	int TimeCount = 1;
	int chapterSum = 0;
	for(int i=0;i<n;i++){
		if(chapterSum+arr[i]<=mid){
			chapterSum = chapterSum+arr[i];
			}
			else{
				TimeCount++;
				if(TimeCount>m||arr[i]>mid){
					return false;
				}
				chapterSum = arr[i];
			}
		}
		return true;
	} 
long long ayushGivesNinjatest(int n, int m,int time[]) 
{	
	int s =0;
	int sum = 0;
	for(int i=0;i<n;i++){
		sum = sum+time[i];
	}
	int e = sum;
	int ans = -1;
	int mid = s+(e-s)/2;
	while(s<=e){
		if(isPossible(time,n,m,mid)){
			ans = mid;
			e = mid-1;
		}else{
			s = mid+1;
		}
		mid = s+ (e-s)/2;
	}
	return ans;
}
int main()
{
    /*
    int n=8,k=2;
    int arr[n] ={0,0,1,1,2,2,2,2};
    printArray(arr,n);
    int a = firstOccurence(arr,n,k);
    cout<<a<<endl;
 */
    /*
        int n = 5;
        int arr[n] = {8, 10, 17, 1,3};
        int ans = getPivot(arr, n);
        cout << ans << endl;
        */
       /*
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = Sqrtinteger(n);
    cout <<" Answer is " << morePrecision(n, 4, tempSol) << endl;
    */
   int arr[5] = {10,20,30,40};
   int a = ayushGivesNinjatest(4,2,arr);
   cout<<a<<endl;
    return 0;
}