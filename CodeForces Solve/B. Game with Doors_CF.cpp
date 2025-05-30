#include<bits/stdc++.h>
using namespace std;
void solve(){
    int l,r,L,R;
    cin>>l>>r>>L>>R;
    if(r<L || R<l){
        cout<<1<<endl;
        return;
    }
    vector<int> rooms(101);

    for(int i=l;i<=r;i++){
        rooms[i]++;
    }

    for(int i=L;i<=R;i++){
        rooms[i]++;
    }
    int ans=0;
    for(int i=1;i<101;i++){
        if(rooms[i]==2 && rooms[i-1]>0){
            ans++;
        }
        if(rooms[i]==1 && rooms[i-1]==2){
            ans++;
        }
    }
    cout<<ans<<endl;

}
int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}