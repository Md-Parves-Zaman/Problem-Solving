#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        if(n%2==0){
            cout<<(n/2)-1<<endl;
        }else{
            cout<<n/2<<endl;
        }
    }
    return 0;
}
