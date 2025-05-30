#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int ctr=0;
    for(int i=1;i<=w;i++){
        ctr+=i*k;
    }
    int borrow=ctr-n;
    if(borrow<0){
        borrow=0;
    }
    cout<<borrow<<endl;
}
