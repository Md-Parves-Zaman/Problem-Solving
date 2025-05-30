#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ll long long
#define INF (ll)1e16

const int N = 1e6 + 5;
const double e = 1e-9;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int32_t main() {
	init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    int a[4];
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    sort(a,a+4);
    
    for(int i=0; i<3; i++){
        cout<<a[3]-a[i]<<" ";
    }
    cout<<endl;
    return 0;
}