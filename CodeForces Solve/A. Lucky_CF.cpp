#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int sumX=0,sumY=0;
        for(int i=0;i<str.size()/2;i++){
            sumX+=str[i]-'0';
            sumY+=str[str.size()-i-1]-'0';
        }
        if(sumX==sumY){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}