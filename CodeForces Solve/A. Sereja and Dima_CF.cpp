#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>cards(n);
    for(int i=0;i<n;i++){
        cin>>cards[i];
    }
    int l=0,r=n-1,ctr1=0,ctr2=0,i=1;
    while(l<=r){
        if(i%2==1)
            {
                if(cards[l]>=cards[r])
                    ctr1+=cards[l++];
                else
                    ctr1+=cards[r--];
            }
            else
            {
                if(cards[l]>=cards[r])
                    ctr2+=cards[l++];
                else
                    ctr2+=cards[r--];
            }
            i++;
    }
    cout<<ctr1<<" "<<ctr2<<endl;
    return 0;
}
