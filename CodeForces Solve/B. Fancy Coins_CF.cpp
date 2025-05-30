#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        long long cnt=0;
        if(ak>0){
            if(m/k>=ak){
                m-=ak*k;
            }
            else{
                m=m%k;
            }
        }
        while(m>=k && m>a1){
            m-=k;
            cnt++;
        }
        if(a1>=m)
            cout<<cnt<<endl;
        else{
            cnt+=m-a1;
            cout<<cnt<<endl;
        }
    }
    return 0;
}
