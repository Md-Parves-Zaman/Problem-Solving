#include<iostream>


using namespace std;
int main(){
    int t,n,d,s;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
        cin>>d>>s;
        }
        int k=1000;
        for(int i=0;i<n;i++){
            k=min(k,d+(s-1)/2);
        }
        cout<<k<<endl;
    }
}
