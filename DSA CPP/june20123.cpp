#include<iostream>
using namespace std;
/*
class Solution
{
public:
    bool checkEqual(int a[26], int b[26])
    {
        for (int i = 0; i < 26; i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2)
    {
        int count1[26] = {0};
        for (int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int i = 0;
        int window = s1.length();
        int count2[26] = {0};
        while (i < window && (i < s2.length()))
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if (checkEqual(count1, count2))
        {
            return true;
        }
        while (i < s2.length())
        {
            char nch = s2[i];
            int index = nch - 'a';
            count2[index]++;
            char oldChar = s2[i - window];
            index = oldChar - 'a';
            count2[index]--;
            i++;

            if (checkEqual(count1, count2))
            {
                return true;
            }
        }
        return false;
    }
};
*/
/*
Inbuilt functions of string
1.length = int len = strlen(name);

2.compare(s1,s2) = strcmp(s1,s2); !=0 means they are not equal. =0 means they are equal.

3.copy = strcpy(destination_string,Source_string); here the source_string will be placed in the destination string.

*/
int getLength(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void rev(char name[])
{
    int s = 0;
    int e = getLength(name) - 1;
    char temp;
    while (s < e)
    {
        temp = name[s];
        name[s] = name[e];
        name[e] = temp;
        s++;
        e--;
    }
    cout << name;
}
string toLowerCase(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch - ('A' - 'a');
            s[i] = ch;
        }
    }
    return s;
}
string reverseString(string str)
{
    int s = 0;
    int e = str.length() - 1;
    while (s < e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}

bool checkPalindrome(string s)
{
    string x = toLowerCase(s);
    string reversed = reverseString(x);
    if (x == reversed)
    {
        return true;
    }
    return false;
}

bool isPresent
int main()
{
    /*
    char ch[20];
    cout << "Enter your crush name: ";
    cin >> ch;
    cout << "The name of your hottest badass gurl is: " << ch << endl;
    cout << "The length of this Smexy name is: " << getLength(ch)<<endl;
    rev(ch);
    cout<<endl;
        rev(ch);
        */
    /*
        string p = "Jal Aj";
        if (checkPalindrome(p))
        {
            cout << "The given string is palindrome. " << endl;
        }
        else
        {
            cout << "The string is not palindrome. " << endl;
        }
        */
    /*
    char ch = 'A';
    int a = ch-('A'-'a');
    cout<<a<<endl;
    char bh = a;
    cout<<bh<<endl;
    */
    /*
   char str[20];
   cin.getline(str,20);
   cout<<str;
   */
    /*
     vector<int> v = { 0, 1, 2, 3, 4, 5 };
    for (auto i : v){
        cout << i << ' ';
    }
    vector<char>chars = {'a','a','b','b','c','c','c'};
    int count = 4;
    string cnt = to_string(count);
    int ansIndexx = 0;
                 for(char ch:cnt){
                    chars[ansIndexx++] = ch;
                    cout<<ansIndexx<<" "<<chars[ansIndexx]<<endl;
                }
                */
    /*


    //2D Arrays:


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
    return 0;
}