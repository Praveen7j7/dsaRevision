#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

void DFS(int node , vector<int> G[], vector<int> & used, vector<int> & parent ){
        cout<<node;
        cout<<'\n';
        used[node]=1;

        for(auto u:G[node]){ //iterating all children 'u' of 'node'

                if(used[u]==0){
                    //if this node/branch has never been visited before 
                    //just go into it and search it using dfs in recursion 
                    parent[u]=node;
                    DFS(u,G,used,parent);
                }
        }
}

int main() {
int n;
cin>>n;
int m;
cin>>m;
vector<int> G[n+5];
int i=1;
while(i<=m){
    int u,v;
    cin>>u>>v;
    G[u].push_back(v);
    G[v].push_back(u);
    i++;

}

//DFS traversal

vector<int> used(n+5, 0);
vector<int> parent(n+5, 0); // so if you are at node x, then you want to know from which node you came so that is parent 
DFS(1, G,used, parent); //starts from node 1


    return 0;
}