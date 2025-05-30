#include<iostream>
using namespace std;

int main(){
    int n,input,f_count=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int i_count=0;
        for(int j=1;j<=3;j++){
            cin>>input;
            if(input==1){
                i_count++;
            }
        }
        if(i_count>=2){
                f_count++;
                }
    }
    cout<<f_count<<endl;
}

