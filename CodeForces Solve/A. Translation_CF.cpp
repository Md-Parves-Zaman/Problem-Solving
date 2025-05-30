#include<bits/stdc++.h>
using namespace std;

bool isReverse(string s,string t){
    if(s.length()!=t.length()){
        return false;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[s.length()-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    string s,t;
    cin>>s>>t;
    if(isReverse(s,t)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
