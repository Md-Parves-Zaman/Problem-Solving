#include<iostream>
using namespace std;
int main(){
    int n,pi,qi,ctr=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pi>>qi;
        if((qi-pi)>=2){
            ctr++;
        }
    }
    cout<<ctr<<endl;
    return 0;
}

