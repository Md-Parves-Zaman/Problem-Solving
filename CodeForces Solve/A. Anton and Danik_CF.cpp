#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;

    int ctrA=0,ctrD=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            ctrA+=1;
        }
        if(s[i]=='D'){
            ctrD+=1;
        }
    }
    if(ctrA>ctrD){
        cout<<"Anton"<<endl;
    }
    else if(ctrD>ctrA){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;

}
