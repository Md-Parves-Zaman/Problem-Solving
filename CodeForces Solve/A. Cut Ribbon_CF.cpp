#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int solve(int n,int a,int b,int c){
    vector<int> dp(n+1,-1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        if(i>=a&&dp[i-a]!=-1){
            dp[i]=max(dp[i],dp[i-a]+1);
        }
        if(i>=b&&dp[i-b]!=-1){
            dp[i]=max(dp[i],dp[i-b]+1);
        }
        if(i>=c&&dp[i-c]!=-1){
            dp[i]=max(dp[i],dp[i-c]+1);
        }
    }
    return dp[n];
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cout<<solve(n,a,b,c)<<endl;
    return 0;
}
