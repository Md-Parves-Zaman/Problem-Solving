#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int maxInd=0,maxVal=0,minInd=0,minVal=1000;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x>maxVal){
            maxInd=i;
            maxVal=x;
        }
        if(x<=minVal){
            minInd=i;
            minVal=x;
        }
    }
    if(maxInd>minInd){
        cout<<(maxInd-1)+(n-minInd)-1<<endl;
    }
    else{
        cout<<(maxInd-1)+(n-minInd)<<endl;
    }
    return 0;
}