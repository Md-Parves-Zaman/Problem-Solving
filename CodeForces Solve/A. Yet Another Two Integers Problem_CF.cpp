#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff = abs(a - b);
        int moves = diff / 10;
        if (diff % 10 != 0){
            moves++;
        }
        cout<<moves<<endl;
    }
    return 0;
}
