#include<iostream>
using namespace std;

void solve(){
    string s1,s2;
    int n;
        cin>>n;
        cin>>s1>>s2;

        for(int i=0;i<n;i++){
            if((s1[i]=='R'&&s2[i]!='R')||(s1[i]!='R'&&s2[i]=='R')){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
