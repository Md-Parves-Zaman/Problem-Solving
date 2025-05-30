#include<iostream>
using namespace std;
int main(){
    int n,ctr=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(c==1){
            ctr++;
        }
    }
    if(ctr>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
        }
}
