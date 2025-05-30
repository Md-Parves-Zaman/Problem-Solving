#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<"0"<<endl;
        } else{
            int diff=abs(a-b);
            int ctr=diff/(2*c);
            if(diff%(2*c)!=0){
                ctr++;
            }
            cout<<ctr<<endl;
        }
    }
    return 0;
}
