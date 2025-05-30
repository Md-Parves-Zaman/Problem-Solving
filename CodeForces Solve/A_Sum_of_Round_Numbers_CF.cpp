#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    vector<int>rec;
    cin>>t;
    while (t--)
    {
        int n,i=0,rem=0;
        cin>>n;
        if(n>=1000){
            rem=n%1000;
            rec.push_back(n-rem);
            n%=1000;
        }
        if(n>=100){
            rem=n%100;
            rec.push_back(n-rem);
            n%=100;
        }
        if(n>=10){
            rem=n%10;
            rec.push_back(n-rem);
            n%=10;
        }
        if(n<10 && n>0){
            rec.push_back(n);
        }
        cout << rec.size() << endl;
        for(int j=0;j<rec.size();j++){
            cout<<rec[j]<<" ";
        }
        cout << "\n";
        rec.clear();
    }
    return 0;
}