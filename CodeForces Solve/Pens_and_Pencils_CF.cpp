#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int pen=(a+(c-1))/c;
        int pencil=(b+(d-1))/d;
        int total=pen+pencil;
        if(total>k){
            cout<<"-1"<<endl;
        }
        else{
            cout<<pen<<" "<<pencil<<endl;
        }
    }
    return 0;
}