#include<iostream>
using namespace std;
int main(){
    int n,k,ctr=0;
    cin>>n>>k;
    int time=240-k;
    for(int i=1;i<=n;i++){
        if(time>=5*i){
            ctr++;
            time=time-5*i;
        }
        else{
            break;
        }
    }
    cout<<ctr<<endl;
    return 0;
}
