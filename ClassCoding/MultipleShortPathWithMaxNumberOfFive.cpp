#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll n; 
    cin >> n; 

    ll m; 
    cin >> m; 
    vector<ll> val(n+5);
    for (ll i = 1; i <= n; i++) {cin >> val[i];}
    vector<ll> G[n+5]; 
    for (ll i = 1; i <= m; i++) {
        ll u, v; 
        cin >> u >> v; 
        G[u].push_back(v);
        G[v].push_back(u);
    }

    

    vector<ll> dist(n+5, 0), fives(n+5, 0), used(n+5, 0);
    queue<ll> q; 
    q.push(1); 
    used[1] = 1; 
    dist[1] = 0; 
    if (val[1] == 5) fives[1] = 1; 
    else fives[1] = 0; 

    while (!q.empty()) {
        ll v = q.front(); 
        q.pop(); 
        for (auto u : G[v]) {
            if (used[u] == 0) {
                used[u] = 1; 
                dist[u] = dist[v] + 1; 
                if (val[u] == 5) {
                    fives[u] = fives[v] + 1; 
                } else {
                    fives[u] = fives[v]; 
                }
                q.push(u); 
            } 
            else{
            if (dist[u] == dist[v] + 1) {
                ll temp; 
                if (val[u] == 5) temp = fives[v] + 1; 
                else temp = fives[v]; 
                if (temp > fives[u]) {
                    fives[u] = temp;
                } 
            }
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        if (used[i] == 0) {
            cout << -1 << " " << -1 << "\n"; 
        } else {
            cout << dist[i] << " " << fives[i] << "\n"; 
        }
    }

    return 0; 
}
