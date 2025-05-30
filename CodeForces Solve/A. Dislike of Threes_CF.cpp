#include <bits/stdc++.h>
using namespace std;
bool isDivisible(int n){
    return n%3!=0 && n%10!=3;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int num=0,ctr=0;
        while(ctr<k){
            num++;
            if(isDivisible(num)){
                ctr++;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}