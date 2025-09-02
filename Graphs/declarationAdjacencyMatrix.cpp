#include <iostream>
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;

int main() {
int n,m;
cin>>n>>m;

    vector<int> g[n];

    for(int i=0;i<m;i++){
        //taking input of the undirected graph 
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for(int i=0;i<=n;i++){
        int c=g[i].size();
        cout<<i<<" "<<c<<"\n";
    }

    return 0;
}