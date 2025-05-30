#include<iostream>

using namespace std;
int main(){
    int n,ctr=0;
    cin>>n;
    int m[n];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    for(int i=0;i<n;i++){
        if(m[i]==m[i+1]){
            continue;
        }
        else{
            ctr++;
        }
    }
    cout<<ctr;
    return 0;
}
