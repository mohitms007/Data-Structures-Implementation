#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Graph{
    int v;
    list<int> *adjlist;
public:
    explicit Graph(int vertices);
    void addEdge(int n,int m);
    void DFS(int start);
    void DFSUtil(int v, bool visited[]);

};

Graph::Graph(int v) {
    this->v = v;
    this->adjlist = new list<int>[v];
}
void Graph::addEdge(int n, int m) {
    adjlist[n].push_back(m);
    adjlist[m].push_back(n);
}

void Graph::DFS(int start) {
    bool *visited = new bool[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;
    DFSUtil(start,visited);
}

void Graph::DFSUtil(int start, bool *visited) {
    visited[start] = true;
    cout << start << " ";
    list<int>::iterator i ;
    for(i=adjlist[start].begin();i!=adjlist[start].end();i++){
            if (!visited[*i])
                DFSUtil(*i, visited);
    }
}

    int main(){
        Graph g(4);
        g.addEdge(0, 1);
        g.addEdge(0, 2);
        g.addEdge(1, 2);
        g.addEdge(2, 0);
        g.addEdge(2, 3);
        g.addEdge(3, 3);
        cout << "DFS -> " ;
        g.DFS(2);
    return 0;

}
