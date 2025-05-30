#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    char input[4];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>input;
        if(strcmp(input,"++X")==0 || strcmp(input,"X++")==0){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}
