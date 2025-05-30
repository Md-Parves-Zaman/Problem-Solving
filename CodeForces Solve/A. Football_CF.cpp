#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int ctr=1;
    for(int i=1;i<=str.length();i++){
        if(str[i]==str[i-1]){
            ctr+=1;
            if(ctr==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            ctr=1;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
