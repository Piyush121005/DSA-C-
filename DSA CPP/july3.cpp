#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    cout << "The ans in index " << index << " is :" << endl;
    for (int j = 0; j < ans.size(); j++)
    {
        for (int i = 0; i < ans[j].size(); i++)
        {
            cout << ans[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Output for index: " << index << endl;
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    solve(nums, output, index + 1, ans);
    int element = nums[index];
    output.push_back(element);
    cout << "Output for index: " << index << " After pushing the element in it is: " << endl;
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
    cout << "The ans in index " << index << " after pushing is :" << endl;
    for (int j = 0; j < ans.size(); j++)
    {
        for (int i = 0; i < ans[j].size(); i++)
        {
            cout << ans[j][i] << " ";
        }
    }
    cout << endl;
    solve(nums, output, index + 1, ans);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
void solve(string digits, vector<string> &ans, string output, int index, string mapping[])
{
    cout << "Index val: " << index << endl;
    cout << "ans is " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << "output is: " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
    }
    cout << "output after pushBack is : " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    solve(digits, ans, output, index + 1, mapping);
    output.pop_back();
}
vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if (digits.length() == 0)
    {
        return ans;
    }
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(digits, ans, output, index, mapping);
    return ans;
}
string isSubset(int a1[], int a2[], int n, int m) {
    vector<int>v1,v2;
    for(int i=0;i<n;i++)v1.push_back(a1[i]);
    for(int i=0;i<m;i++)v2.push_back(a2[i]);
    for(int i=0;i<m;i++)
    {
        auto it=find(v1.begin(),v1.end(),v2[i]);
        if(it==v1.end())
          return "No";
        v1.erase(it);  
    }
    return "Yes";
}
int main()
{
    /*
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>>container;
    container = subsets(nums);
    for(int j = 0;j<container.size();j++){
    for(int i = 0;i<container[j].size();i++){
        cout<<container[j][i]<<" ";
    }
    }
 */
    string digits = "23";
    vector<string> str;
    letterCombinations(digits);

    return 0;
}