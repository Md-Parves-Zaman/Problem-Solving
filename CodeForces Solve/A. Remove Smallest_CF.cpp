#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ll long long
#define INF (ll)1e16

const int N = 1e6 + 5;
const double e = 1e-9;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        bool possible=true;
        for(int i=1;i<n;i++){
            if(abs(a[i]-a[i-1])>1){
                possible=false;
                break;
            }
        }
        cout<<(possible?"YES":"NO")<<endl;
    }
    return 0;
}
