#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a<=b){
            cout<<b-a<<endl;
        }
        else{
            if(a%b==0){
                cout<<(a%b)<<endl;
            }
            else{
                cout<<b-(a%b)<<endl;
            }
        }
    }
    return 0;
}
