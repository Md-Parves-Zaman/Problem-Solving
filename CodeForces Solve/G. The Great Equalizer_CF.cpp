#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        set<pair<int, int>> elements;
        for (int i = 0; i < n; ++i) {
            elements.insert({a[i], i});
        }

        int q;
        cin >> q;

        while (q--) {
            int i, x;
            cin >> i >> x;
            --i;

            auto it = elements.lower_bound({a[i], i});
            elements.erase(it);

            a[i] = x;
            elements.insert({a[i], i});

            int result = a.back() + elements.size();

            cout << result << " ";
        }

        cout << "\n";
    }

    return 0;
}
