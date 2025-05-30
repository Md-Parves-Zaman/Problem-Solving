#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int ctr=0;
    while(n!=0){
        if(n%10==7 || n%10==4){
            ctr+=1;
        }
            n/=10;
    }
    if(ctr==4 || ctr==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
