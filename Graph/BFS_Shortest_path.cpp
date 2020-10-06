#include<bits/stdc++.h>
using namespace std;

class Graph{
    int num_vertices;
    list<int> *adjlist;

public:
    Graph(int vertices){
        this->num_vertices = vertices;
        adjlist = new list<int>[num_vertices];
    }
    void addEdge(int m, int n){
        adjlist[n].push_back(m);
        adjlist[m].push_back(n);
    }
    void BFS(int n){
        vector<int> d(n), p(n);
        bool *visited = new bool[num_vertices];
        for(int i = 0; i < num_vertices; i++)
            visited[i] = false;
        int s = n;
        visited[s] = true;
        p[s] = -1;
        queue<int> ans;
        list<int>::iterator i;
        ans.push(s);
        while(!ans.empty()){
            int curr = ans.front();
            ans.pop();
            cout<<curr<<" ";
            for(i = adjlist[curr].begin();i!=adjlist[curr].end();i++) {
                if (!visited[*i]) {
                    ans.push(*i);
                    visited[*i] = true;
                    d[*i] = d[curr] + 1;
                    p[*i] = curr;
                }
            }
        }
        int vertex = 3;
        if (!visited[vertex]) {
            cout << "No path!";
        } else {
            vector<int> path;
            for (int v = vertex; v != -1; v = p[v])
                path.push_back(v);
            reverse(path.begin(), path.end());
            cout << "Path: ";
            for (int v : path)
                cout << v << " ";
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.BFS(2);
}