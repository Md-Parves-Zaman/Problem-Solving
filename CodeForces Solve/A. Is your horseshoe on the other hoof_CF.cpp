#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d,ctr=0;
    cin>>a>>b>>c>>d;
    int arr[4]={a,b,c,d};
    sort(arr,arr+4);
    for(int i=0;i<3;i++){
        if(arr[i]==arr[i+1]){
            ctr++;
        }
    }
    cout<<ctr<<endl;
    return 0;
}
