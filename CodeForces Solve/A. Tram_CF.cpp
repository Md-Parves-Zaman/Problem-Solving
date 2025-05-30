#include<bits/stdc++.h>
using namespace std;

void tram(){
    int n;
    cin>>n;
    int currPass=0,maxPass=0;
    for(int i=1;i<=n;i++){
        int a,b;
        //input
        cin>>a>>b;
        //Passenger exit
        currPass-=a;
        //Passenger entry
        currPass+=b;
        //Max status update
        if(currPass>maxPass){
            maxPass=currPass;
        }
    }
    cout<<maxPass<<endl;
}

int main(){
    tram();
    return 0;
}
