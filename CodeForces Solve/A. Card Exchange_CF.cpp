#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n>>k;

        vector<int> v(n);
        map<int,int>map;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            map[v[i]]++;
        }
        bool p=false;
        for (const auto& pair : map) {
            if (pair.second>=k) {
                p=true;
                break;
            }
        }
        if(p) cout << k-1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}
