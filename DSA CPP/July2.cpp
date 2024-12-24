#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}
int total(vector<int> &nums, int n, int start)
{

    if (n == 0)
    {
        return 0;
    }
    int ans = nums[start];
    start++;
    ans += total(nums, n - 1, start);
    return ans;
}

int leftsum(vector<int> &nums, int n, int sum, int start)
{
    int ans = nums[start];
    if (n == 0)
    {
        return 0;
    }
    ans += total(nums, n - 1, start);
    if (nums[start] == (sum - (ans * 2)))
    {
        return start;
    }
    start++;
}
int pivotIndex(vector<int> &nums)
{
    int n = nums.size();
    int totalSum = total(nums, n, 0);
    int a = leftsum(nums, n, totalSum, 0);
    return a;
}

string rev(string ch, int start, int end)
{
    char a = ch[start];
    char b = ch[end];
    ch[start] = b;
    ch[end] = a;
    start++;
    end--;
    if (start >= end)
    {
        return ch;
    }
    return rev(ch, start, end);
}
bool check(string ch, int start)
{
    int end = ch.length() - 1 - start;
    if (ch[start] == ch[end])
    {
        start++;
    }
    else if (ch[start] != ch[end])
    {
        return false;
    }
    if (start > end)
    {
        return true;
    }
    return check(ch, start);
}
int powerUR(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    int ans = powerUR(a, b / 2);
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * (ans * ans);
    }
}
void sortArr(int *arr, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    sortArr(arr, n - 1);
}
void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int getSum(vector<int> &boards, int n, int start)
{
    if (start == n)
    {
        return 0;
    }
    int sum = boards[start++];
    sum += getSum(boards, n, start);
    return sum;
}
/*
bool isPossible(vector<int> &boards,int n, int k,int mid,int sum,int emp,int start){
    cout<<"n is: "<<n<<" k is: "<<k<<" mid is: "<<mid<<" sum is: "<<sum<<" emp is: "<<emp<<" start is: "<<start<<endl;
    if(start==n){
            cout<<" true "<<endl;
        return true;
    }
    if( sum+ boards[start]<=mid){
        sum = sum + boards[start++];
        cout<<sum<<endl;
    }else{
        emp++;
        cout<<emp<<endl;
        if(emp>k||boards[start]>mid){
                cout<<" false "<<endl;
            return false;
        }
        sum = boards[start];
        start++;
        cout<<"Sum is: "<<sum<<" start is: "<<start<<endl;
    }
    return isPossible(boards,n,k,mid,sum,emp,start);
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int answer = -1;
    int n = boards.size();
    int sum = getSum(boards,n,0);
    int s = 0;
    int e = sum;
    int mid = s + (e-s)/2;
    while(s<=e){
        cout<<isPossible(boards,n,k,mid,0,1,0)<<endl;
        if(isPossible(boards,n,k,mid,0,1,0)){
            answer = mid;
            cout<<answer<<endl;
            e = mid-1;
        }else{
            s = mid+1;
        }
        mid = s+ (e-s)/2;
    }
    return answer;
}
*/
/*
bool isPossible(vector<int> &stalls,int n,int k,int mid,int cc,int lastPos,int start){
    if(stalls[start]-lastPos>=mid){
    cc++;
        if(cc == k){
        return true;
    }
    lastPos = stalls[start];
    }
        if(start==n-1&&cc!=k){
        return false;
    }
    return isPossible(stalls,n,k,mid,cc,lastPos,start+1);

}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n = stalls.size();
    int ans = -1;
    int s=0;
    int maxi = -9999;
    for(int i=0;i<stalls.size();i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(isPossible(stalls,n,k,mid,1,stalls[0],0)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
*/
bool isPossible(int n, int m, vector<int> time, int mid, int start, int count, long long sum)
{
    cout<<" n is: "<<n<<" m is: "<<m<<" mid is: "<<mid<<" start is: "<<start<<" count is: "<<count<<" sum is: "<<sum<<endl; 
    if (start == m - 1 && count != n)
    {
        cout<<"false1 "<<endl;
        return false;
    }
    if (sum + time[start] <= mid)
    {
        sum += time[start];
        cout<<"Sum1 is: "<<sum<<endl;
    }
    else
    {
        count++;
        cout<<"count is: "<<count<<endl;
        if (count > n || time[start] > mid)
        {
            cout<<"false2"<<endl;
            return false;
        }
        sum = time[start];
        cout<<"sum2 is: "<<sum<<endl;
        
    }
        if (count == n && start == m - 1)
    {
        cout<<"true"<<endl;
        return true;
    }
    return isPossible(n, m, time, mid, start + 1, count, sum);
}
long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long ans = -1;
    long long start = 0;
    long long e = 0;
    long long s = 0;
    for (int i = 0; i < m; i++)
    {
        e += time[i];
    }
    long long mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(n, m, time, mid, 0, 1, 0))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()

{

    vector<int> time;
    time.push_back(2);
    time.push_back(2);
    time.push_back(3);
    time.push_back(3);
    time.push_back(4);
    time.push_back(4);
    time.push_back(1);
    cout << ayushGivesNinjatest(4, 7, time);
    return 0;

    /*
 vector<int> board;
 board.push_back(5);
 board.push_back(5);
 board.push_back(5);
 board.push_back(5);
 cout<<findLargestMinDistance(board,2);
 */
    /*
    vector<int>stalls;
    stalls.push_back(0);
    stalls.push_back(7);
    stalls.push_back(4);
    stalls.push_back(3);
    stalls.push_back(10);
    stalls.push_back(9);
    cout<<aggressiveCows(stalls,4);
    */

    // PrintArr(arr,7);
    /*
       int a,b;
       cin>>a>>b;
       int ans = powerUR(a,b);
       cout<<ans;
       */

    /*
      string ch = "abcd";
      cout<<rev(ch,0,ch.length()-1)<<endl;
      string name = "baipoiab";
      if(check(name,0)){
          cout<<"It is a Palindrome";
      }else{
          cout<<"It is not a Palindrome";
      }
      */
    /*

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(6);
    int ind = pivotIndex(arr);
    cout<<ind<<endl;
*/
}