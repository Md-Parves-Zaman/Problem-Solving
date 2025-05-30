#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> arr={a,b,c,d};
        sort(arr.begin(),arr.end());
        cout<<(3-(lower_bound(arr.begin(),arr.end(),a)-arr.begin()))<<endl;
    }
    return 0;
}
