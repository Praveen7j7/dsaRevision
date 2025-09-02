#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    int n, k;
    cin >> n >> k;
    ll b[n + 1];
    for (int i = 1; i <= n; i++) cin >> b[i];

    ll p = 0;

    for (int i = 1; i <= n; i++) {
        ll sum = 0;
        for (int j = i; j <= n; j++) {
            sum += b[j];  // sum of subarray [i...j]
            if (sum <= k) {
                ll l = j - i + 1;
                p = max(p, l);  // keep track of max length
            }
        }
    }

    cout << p << endl;
    return 0;
}

//TC=>0(N^2)