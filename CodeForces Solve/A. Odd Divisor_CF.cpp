#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n;
    cin>>n;
    if(n%2){
        cout<<"Yes"<<endl;
        return;
    }
    while(n%2==0){
        n/=2;
    }
    if(n>1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}