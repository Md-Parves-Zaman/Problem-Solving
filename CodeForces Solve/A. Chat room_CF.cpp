#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string word="hello";
    int ctr=0,j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==word[j]){
            j++;
            ctr++;
        }
    }
    if(ctr==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

