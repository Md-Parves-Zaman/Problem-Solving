#include<iostream>
#include<algorithm>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else
    // online submission
    #endif
}

int main(){
    init_code();
    int a,b,c;
    cin>>a>>b>>c;
    int ar[3]={a,b,c};
    sort(ar,ar+3);
    cout<<(ar[2]-ar[1]+ar[1]-ar[0])<<endl;
    return 0;
}