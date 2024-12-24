#include <iostream>
#include <unordered_map>
#include <list>
#include <stack>
#include <limits.h>
#include <vector>

using namespace std;

class Graph {
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int weight) {
        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printAdj() {
        for (auto i : adj) {
            cout << i.first << " ->";
            for (auto j : i.second) {
                cout << "(" << j.first << ", " << j.second << ")";
            }
            cout << endl;
        }
        cout << endl;
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s) {
        visited[node] = true;

        for (auto neighbour : adj[node]) {
            if (!visited[neighbour.first]) {
                dfs(neighbour.first, visited, s);
            }
        }
        s.push(node);
    }

    void getShortestPath(int src, vector<int> &dist, stack<int> &s) {
        // Initialize the distance of the source node
        dist[src] = 0;

        // Process vertices in topological order
        while (!s.empty()) {
            int element = s.top();
            s.pop();

            if (dist[element] != INT_MAX) { // Check if distance is not infinity
                for (auto i : adj[element]) {
                    if (dist[element] + i.second < dist[i.first]) {
                        dist[i.first] = dist[element] + i.second;
                    }
                }
            }
        }
    }
};

int main() {
    Graph g;

    g.addEdge(0, 1, 5);
    g.addEdge(0, 2, 3);
    g.addEdge(1, 2, 2);
    g.addEdge(1, 3, 6);
    g.addEdge(2, 3, 7);
    g.addEdge(2, 4, 4);
    g.addEdge(2, 5, 2);
    g.addEdge(3, 4, -1);
    g.addEdge(4, 5, -2);

    g.printAdj();

    int n = 6;
    // Topological Sort logic
    unordered_map<int, bool> visited;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            g.dfs(i, visited, s);
        }
    }

    int src = 1;
    vector<int> dist(n, INT_MAX); // Initialize distance vector with INT_MAX
    
    g.getShortestPath(src, dist, s);

    cout << "The shortest path distances from source " << src << " are: ";
    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX)
            cout << "INF ";
        else
            cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}
