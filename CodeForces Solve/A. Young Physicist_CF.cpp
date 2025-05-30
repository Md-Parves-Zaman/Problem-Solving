#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,x,y,z;
    cin>>n;
    int xsum(0),ysum(0),zsum(0);
    for(i=1;i<=n;i++){
        cin>>x>>y>>z;
        xsum+=x;
        ysum+=y;
        zsum+=z;
    }
    if(xsum == 0 && ysum == 0 && zsum == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
