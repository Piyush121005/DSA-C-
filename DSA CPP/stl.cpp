#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    /*
    //Array

    int basic[] = {1,2,4};
    array<int,4> a = {1,12,123,1234}; //Not used as it is also static just like the basic array.
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index: "<<a.at(2)<<endl;

    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"First element: "<<a.front()<<endl;
        cout<<"Last element: "<<a.back()<<endl;
        */

    /*

    // Vector

    // Size = Number of Current element in an array/vector/list data structures.
    // Capacity = Total number of elements that can be stored in an array/list/vector data structures.
    vector<int> v;
    //vector<int> v1(5,1);
    //5 indicates the size of the vector and 1 indicates the value at all the index. if 1 is not written, every indicies will be filled with 0.
    vector<int> v1(5,1);
    vector<int> last(v1);
    cout<<"Elements of last vector are: ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(20);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(35);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(44);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    v.push_back(60);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;

    cout << "Element at index: " << v.at(1) << endl;

    cout << "Element at front: " << v.front() << endl;
    cout << "Element at back: " << v.back() << endl;
    v.pop_back();
    cout << "Element at back: " << v.back() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.push_back(81);
    v.push_back(74);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.pop_back();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    v.clear();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;
    */
    /*


     // DeQue = Insertion and deletion from both end is possible. Random Access is possible
     deque<int> d;


     d.push_back(5);
     d.push_front(1);
     for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
     cout << "After poping: " << endl;
     d.pop_back();
     for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
     cout << "After pushing: " << endl;
     d.push_front(5);
     d.push_front(7);
     d.push_back(13);
     d.push_front(2);
     d.push_back(25);
     d.push_front(9);
     for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
     d.erase(d.begin(),d.begin()+3);
     cout<<"After erasing: "<<endl;
         for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }
         d.erase(d.begin(),d.begin()+3);
             cout<<"After erasing again: "<<endl;
         for (int i = 0; i < d.size(); i++)
     {
         cout << d[i] << endl;
     }

     */


    /*

    //List = It is made with the help of doubly linked list. Direct Operation is not possible here.
    list<int> l;
    l.push_back(50);
    l.push_front(15);
    for(int i:l){
     cout<<i<<endl;
    }
    l.erase(l.begin());
       for(int i:l){
     cout<<i<<endl;
    }
    cout<<l.size()<<endl;
    list<int> newOne(l); // here we are making a new list and copying the previous list into the new list.
          for(int i:newOne){
     cout<<i<<endl;
    }
    */
    /*


    stack<string> s;


    s.push("Kunika ");
    s.push("Jigyasa");
    s.push("Nia");

  //cout<<"Top gurl is: "<<s.top()<<endl;
  //s.pop();
  //cout<<"Top gurl is: "<<s.top()<<endl;
  //s.pop();
  //cout<<"Top gurl is: "<<s.top()<<endl;
  //s.pop();

  cout<<"Size of stack: "<<s.size()<<endl;
  cout<<"Empty or not: "<<s.empty()<<endl;
   */


    /*

    // Queue => First in First Out.

    queue<string> q;

      q.push("Kunika ");
      q.push("Jigyasa");
      q.push("Nia");
    cout<<"Empty or not: "<<q.empty()<<endl;
    cout<<"Top gurl is: "<<q.front()<<endl;
    q.pop();
    cout<<"Top gurl is: "<<q.front()<<endl;
    q.pop();
    cout<<"Top gurl is: "<<q.front()<<endl;
    q.pop();
    */
    /*

     // Priority Queue

     // Max heap.

     priority_queue<int> badaVala;

     // Min heap
     priority_queue<int, vector<int>, greater<int>> ChootaVala;
     badaVala.push(10);
     badaVala.push(17);
     badaVala.push(21);
     badaVala.push(34);
     badaVala.push(55);
     badaVala.push(27);
     badaVala.push(45);
     badaVala.push(40);
     cout << "Size -> " << badaVala.size() << endl;
     int n = badaVala.size();
     for (int i = 0; i < n; i++)
     {
         cout << badaVala.top() << " ";
         badaVala.pop();
     }
     cout<<endl;
     ChootaVala.push(13);
     ChootaVala.push(34);
     ChootaVala.push(48);
     ChootaVala.push(51);
     ChootaVala.push(60);
     ChootaVala.push(67);
     ChootaVala.push(28);
         cout << "Size -> " << ChootaVala.size() << endl;
     int m = ChootaVala.size();
     for (int i = 0; i < m; i++)
     {
         cout << ChootaVala.top() << " ";
         ChootaVala.pop();
     }
     cout<<endl;
     cout<<"Empty or full: "<<ChootaVala.empty()<<endl;
     */
    /*

    //Set = It is a data structure where only unique elements get stored. It get stored in sorted order.
    //operations with complexity O(log n) = insert,find,erase,count.
    //operations with complexity O(1) = size,begin,end,empty.

     set<int> se;
    se.insert(73);
    se.insert(15);
    se.insert(24);
    se.insert(19);
    se.insert(50);
    se.insert(1); //insertion complexity = O(log n).
    for(auto i:se){
     cout<<i<<endl;
    }
    se.erase(se.begin());
    cout<<"After erasing: "<<endl;
       for(auto i:se){
     cout<<i<<endl;
    }
    cout<<"-24 is present or not: "<<se.count(-24)<<endl;
    set<int>::iterator itr = se.find(50);
    for(auto it = itr;it!=se.end();it++){
     cout<<*it<<" ";
    }
    cout<<endl;
 cout<<"Value present at itr -> "<<*itr<<endl;
 */

    // Map = It is a data structure in which data is stored in key:value fashion. All the keys are unique and one key points to only one value.

    // Insertion,find,erase,count complexity is O(log n) for ordered map. in unordered map however, the complexity is O(l1).
    
    /*
    map<int,string> m;
    m[1] = "Kunika Pandey";
    m.insert ({7,"Jhalak Sharma"});
    m[2] = "Nia Jain";
    for(auto i:m){
        cout<<i.first<<endl;

    }
    m[5] = "Jigyasa Pandey";

    cout<<"After assigning a value: "<<endl;
    for(auto i:m){
        cout<<i.first<<endl;

    }
    cout<<"Finding 2 -> "<<m.count(2)<<endl;
    cout<<"After Erasing: "<<endl;
    m.erase(5);
    for(auto i:m){
        cout<<i.first<<endl;

    }
    cout<<"Using find operation"<<endl;
    auto it = m.find(2);
    for(auto i = it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    */
    vector<int> v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(17);
    v.push_back(28);
    v.push_back(32);
    v.push_back(39);
    v.push_back(42);
    cout << "Finding 32: " << binary_search(v.begin(), v.end(), 32) << endl;
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 17) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 32) - v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "Max -> " << max(a, b) << endl;
    cout << "Min -> " << min(a, b) << endl;
    swap(a, b);
    cout << "The value of A = " << a << endl;
    string abcd = "wxyz";
    cout << "The string is: " << abcd << endl;
    reverse(abcd.begin(), abcd.end());
    cout << "The reversed string is: " << abcd << endl;
    cout << "Before rotating: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << endl
         << "After rotating: " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout<<endl<<"After sorting: "<<endl;;
    sort(v.begin(), v.end()); // Sorting is based on introsort. it is a combination of three sort i.e quick sort,heap sort and insertion sort.
    for (int i : v)
    {
        cout << i << " ";
    }
    return 0;
}