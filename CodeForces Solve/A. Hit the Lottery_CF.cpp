#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    int a[]={100,20,10,5,1};
    cin>>n;
    for(int i=0;i<5;i++){
        count+=n/a[i];
        n=n%a[i];
    }
    cout<<count;
    return 0;
}
