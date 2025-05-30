#include<iostream>
using namespace std;
int main(){
    string s;
    int flag=0,ctr=0;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(islower(s[i])){
            flag=1;
            break;
        }
    }
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            ctr++;
        }
    }
    if(islower(s[0])&&!flag){
        s[0]=toupper(s[0]);
        for(int i=1;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
        return 0;
    }
    if(ctr==s.length()){
        for(int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);
        }
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}
