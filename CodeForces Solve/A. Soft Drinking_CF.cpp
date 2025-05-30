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

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink_toasts=(k*l)/(n*nl);
    int lime_toasts=(c*d)/n;
    int salt_toasts=p/(n*np);

    int min_toasts=min(drink_toasts,min(lime_toasts,salt_toasts));
    cout<<min_toasts<< endl;
    return 0;
}
