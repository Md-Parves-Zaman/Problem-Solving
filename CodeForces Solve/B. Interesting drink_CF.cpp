#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    sort(prices.begin(),prices.end());
    int days;
    cin>>days;
    while(days--){
        int m,ctr;
        cin>>m;
        ctr=upper_bound(prices.begin(),prices.end(),m)-prices.begin();
        cout<<ctr<<endl;
    }
}