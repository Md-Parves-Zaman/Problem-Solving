#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string, int>record;
    string s;
    while(t--){
        cin>>s;
        if(record.count(s)==0){
            cout<<"OK"<<endl;
            record[s]=1;
        }
        else{
            cout<<s<<record[s]<<endl;
            record[s]+=1;
        }
    }
    return 0;
}
