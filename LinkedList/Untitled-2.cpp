#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>>& adj, int N) {
   
    vector<int> indegree(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < adj[i].size(); j++) {
            int it = adj[i][j];
            indegree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < N; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    vector<int> result;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        
        for (int j = 0; j < adj[node].size(); j++) {
            int it = adj[node][j];
            indegree[it]--;

            if (indegree[it] == 0) {
                q.push(it);
            }
        }
    }


    if (result.size() != N) {
        cout << "Graph contains cycle!" << endl;
        return {};
    }

    return result;
}

int main() {
  
    int n = 6;


    vector<vector<int>> edges = { { 0, 1 }, { 1, 2 }, { 2, 3 }, { 4, 5 }, { 5, 1 }, { 5, 2 } };


    vector<vector<int>> adj(n);

    for (int i = 0; i < edges.size(); i++) {
        adj[edges[i][0]].push_back(edges[i][1]);
    }


    cout << "Topological sorting of the graph: ";
    vector<int> result = topologicalSort(adj, n);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
