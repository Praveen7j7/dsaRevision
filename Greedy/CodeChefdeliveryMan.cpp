#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y;
    cin >> n >> x >> y;

    vector<int> a(n), b(n);
    for (int &ai : a) cin >> ai;
    for (int &bi : b) cin >> bi;

    // base sum = Bob does all orders
    ll base_sum = 0;
    vector<int> diff(n);

    for (int i = 0; i < n; ++i) {
        base_sum += b[i];
        diff[i] = a[i] - b[i];
    }

    // sort differences in descending order
    sort(diff.rbegin(), diff.rend());

    // compute prefix sums of top k deltas
    vector<ll> prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + diff[i - 1];
    }

    ll max_tip = 0;
    for (int i = 0; i <= n; ++i) {
        // i = number of tasks Andy takes
        // n - i = tasks Bob takes
        if (i <= x && (n - i) <= y) {
            ll total = base_sum + prefix[i];
            max_tip = max(max_tip, total);
        }
    }

    cout << max_tip << '\n';
    return 0;
}
