#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxi=0,ctr=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        maxi=max(arr[i],maxi);
    }
    for(int i=0;i<n;i++){
        ctr+=maxi-arr[i];
    }
    cout<<ctr<<endl;
    return 0;
}