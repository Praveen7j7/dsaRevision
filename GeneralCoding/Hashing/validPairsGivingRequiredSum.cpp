#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> logs; // keys are =>l indexes, values are the number itself
    //as keys must be unique in maps

    vector<pair<int, int>> results; // store all answers



    for (int i = 0; i < n; i++) {
        int sum = k - arr[i];
        auto it = logs.find(sum);

        if (it != logs.end()) {
            results.push_back({it->second, i});
            // don't break, continue searching
        }
        logs[arr[i]] = i;
    }

    if (results.empty()) {
        cout << "No such pairs\n";
    } else {
        for (auto &p : results) {
            cout << "Indices: " << p.first << " " << p.second
                 << " -> Values: " << arr[p.first] << " + " << arr[p.second] << "\n";
        }
    }

    return 0;
}
