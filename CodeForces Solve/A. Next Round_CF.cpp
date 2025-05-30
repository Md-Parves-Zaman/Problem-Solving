#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int t_count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        if(a[j]>=a[k-1] && a[j]>0){
            t_count++;
        }
    }
    cout<<t_count<<endl;

}
