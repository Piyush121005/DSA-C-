#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph{

    unordered_map<int, list<int> >adj;

    public:
    
    void addEdge(int u,int v, bool direction){
    //Direction = 1 -> Directed graph
    //Direction = 0 -> Undirected graph
    adj[u].push_back(v);
    if(!direction) adj[v].push_back(u);
    }

    void printAdjList(){

        for(auto i:adj){
            cout<<i.first<<" ->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }

};

int main(){
    int n,m;
    cout<<"Enter the number of nodes: ";
    cin>>n;

    cout<<"Enter the number of edges: ";
    cin>>m;

    Graph g;
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //Undirected Graph
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}