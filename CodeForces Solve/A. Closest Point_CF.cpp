#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> set;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            set.push_back(x);
        }
        bool check=1;
        if(n>2){
            check=0;
        }
        else{
            if(set[1]-set[0]==1){
                check=0;
            }
        }
        if(check){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}    