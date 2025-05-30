#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    t*=3;
    while(t--){
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        if(str[0]=='?'){
            if(str[1]=='B' && str[2]=='C'){
                cout<<'A'<<endl;
            }
            else if(str[1]=='A' && str[2]=='B'){
                cout<<'C'<<endl;
            }
            else if(str[1]=='A' && str[2]=='C'){
                cout<<'B'<<endl;
            }
        }
    }
    return 0;
}