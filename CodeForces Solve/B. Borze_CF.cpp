#include<bits/stdc++.h>
using namespace std;
int main(){
    string str,oStr;
    cin>>str;
    for(int i=0;i<str.size();i++){
        if(str[i]=='.'){
            oStr+='0';
        }
        if(str[i]=='-' && str[i+1]=='.'){
            oStr += '1';
            i++;
        }
        if(str[i]=='-' && str[i+1]=='-'){
            oStr += '2';
            i++;
        }
    }
    cout<<oStr<<endl;
}