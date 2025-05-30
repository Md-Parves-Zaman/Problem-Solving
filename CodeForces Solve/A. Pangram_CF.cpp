#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,ctr=0;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++){
        if(str[i]!=str[i+1]){
            ctr++;
        }
    }
    if(ctr==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
