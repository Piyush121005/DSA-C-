#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    //Insertion
    //1
    pair<string,int> pair1 = make_pair("Jigyasa",1);
    m.insert(pair1);

    //2
    pair<string,int> pair2("Akansha",2);
    m.insert(pair2);

    //3
    m["Taranpreet"] = 3;

    //searching
    cout<<m["Taranpreet"]<<endl;
    cout<<m.at("Akansha")<<endl;
    cout<<m.at("Jigyasa")<<endl;
    cout<<m["Muskan Choudhary"]<<endl;
    cout<<m.at("Muskan Choudhary");
    cout<<m["Tia"]<<endl;
    cout<<m.at("Tia")<<endl;

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<<m.count("Manasvi")<<endl; // 0 for absence, 1 for presence

    //erase
    m.erase("Tia");
    cout<<m.size()<<endl;

    //Iteration in HashMaps
    //Iteration can happen in any order in unordered_map but follows order in map.
    //1
    for(auto i:m){
        cout<< i.first<<" "<<i.second<<endl;
    }
    //2
    unordered_map<string,int> :: iterator it = m.begin();
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}