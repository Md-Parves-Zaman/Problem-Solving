#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int possi[13]={4,7,44,47,74,77,444,447,474,477,744,774,777};
    bool isTrue=false;
    for(int i=0;i<13;i++){
        if(n%possi[i]==0){
            isTrue=true;   
            break;
        }
    }
    if(isTrue==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}