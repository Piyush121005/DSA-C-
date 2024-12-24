#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>

using namespace std;
void dfs(int node,int parent,unordered_map<int,bool> &visited, vector<int> &low,vector<int> &desc, 
        vector<int> &ap, int &timer, unordered_map<int,list<int>> &adj){
            visited[node] = true;
            low[node] = desc[node] = timer++;
            
            int child = 0;
            //neighbour nods
            for(auto nbr: adj[node]){
                if(nbr==parent)
                continue;

                if(!visited[nbr]){
                    dfs(nbr,node,visited,low,desc,ap,timer,adj);
                    low[node] = min(low[node],low[nbr]);

                    //articulation point condition
                    if(low[nbr]>=desc[node] && parent!=-1){
                        ap[node] = 1;
                    }
                    child++;

                }else{
                    //BackEdge contition
                    low[node] = min(low[node],desc[nbr]);
                }
            }
            if(parent == -1 && child>1){
                ap[node] = 1;
            }
        }
int main(){
    vector<pair<int,int>> edges;
    int e = 5;
    int v = 5;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    //adj list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //make the required data structures
    int timer = 0;
    vector<int>desc(v,-1);
    vector<int>low(v,-1);
    unordered_map<int,bool>visited;
    int parent = -1;

    //dfs call
    vector<int>ap(v,0);
    for(int i=0;i<v;i++){
        if(!visited[i]){
            dfs(i,parent,visited,low,desc,ap,timer,adj);
        }   
    }
    //print ap
    cout<<"Articulation points are as follows "<<endl;
    for(int i=0;i<v;i++){
        if(ap[i]!=0)
            cout<<i<<" ";
    }
        cout<<endl;


    return 0;
}