#include<iostream>
using namespace std;
int main(){
    int n,ctr=0,crime=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==-1){
            if(ctr>0){
                ctr--;
            }
            else{
                crime++;
            }
        }
        else{
            ctr+=a[i];
        }
    }
    cout<<crime<<endl;
    return 0;
}
