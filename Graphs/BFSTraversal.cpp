#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

//without using any defined data structure 

int main() {

    int n;
    cin>>n;
    int m;
    cin>>m;

    vector<int> G[n+5];

    int i=1;
    while(i<=m){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
        i++;

    }
    int source =1;
    int used[n+5]={0}; //visited array 
    int level[n+5]={0};

    queue<int> q;
    q.push(source);
    used[source]=1;

    while(!q.empty()){
        int removed =q.front();
        cout<<removed<<' '<<level[removed]<<'\n';
        q.pop();

        for(auto u: G[removed]){
            if(used[u]==0){
            q.push(u);
            used[u]=1;
            level[u]=level[removed]+1;
            }
        }
    }


    //So using this we can find the shortest distance of any node from the source node with respect to the level of that node 
}