#include<iostream>
#include<algorithm>
using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    init_code();
    int n,m;
    cin>>n>>m;
    int location=1;
    long long int ctr=0;
    for(int i=0;i<m;i++){
        int destination;
        cin>>destination;

        if(destination>=location){
            ctr+=destination-location;
        }
        else{
            ctr+=n-(location-destination);
        }
        location=destination;
    }
    cout<<ctr<<endl;
    return 0;
}

