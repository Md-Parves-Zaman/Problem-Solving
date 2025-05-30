#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,mySum=0,takenCoin=0;
    vector<int>coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
        sum+=coin[i];
    }

    sum=sum/2;
    sort(begin(coin),end(coin));

    for(int j=n-1;j>=0;j--){
        mySum+=coin[j];
        takenCoin++;
        if(sum<mySum){
            break;
        }
    }
    cout<<takenCoin<<endl;
    return 0;
}
