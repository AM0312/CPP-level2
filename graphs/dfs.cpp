#include<bits/stdc++.h>
using namespace std;

class Graph{
    list<int> *l;
    int V;
public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }

    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        if(undir) l[j].push_back(i);
    }

    void printAdjList(){
        for(int i=0;i<V;i++){
            cout<<i<<"-->";
            for(auto node:l[i]){
                cout<<node<<",";
            }
            cout<<endl;
        }
    }

    void dfsHelper(int node,bool *visited){
        visited[node]=true;
        cout<<node<<",";
        for(int nbr:l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr,visited);
            }
        }
        return;
    }

    void dfs(int source){
        bool *visited=new bool[V]{false};
        dfsHelper(source,visited);
    }
};

int main(){
    Graph g(6);
    g.addEdge(0,1,false);
    g.addEdge(0,2,false);
    g.addEdge(2,1,false);
    g.addEdge(1,3,false);
    g.addEdge(3,2,false);
    g.addEdge(3,4,false);
    g.addEdge(4,5,false);
    g.addEdge(5,5,false);
    g.dfs(0);

    // g.printAdjList();

    return 0;
}