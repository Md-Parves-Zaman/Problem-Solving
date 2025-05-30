#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int number(0);
    vector<int> h(n),g(n);
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
        for(int j=0;j<i;j++){
            if(h[i]==g[j]){
                number+=1;
            }
            if(g[i]==h[j]){
                number+=1;
            }
        }
    }
    cout<<number<<endl;
    return 0;
}
