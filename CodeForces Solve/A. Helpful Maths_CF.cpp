#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt1 = count(s.begin(), s.end(), '1');
    int cnt2 = count(s.begin(), s.end(), '2');
    int cnt3 = count(s.begin(), s.end(), '3');
    s.clear();
    for(int i=0;i<cnt1;i++){
        s+="1+";
    }
    for(int i=0;i<cnt2;i++){
        s+="2+";
    }
    for(int i=0;i<cnt3;i++){
        s+="3+";
    }
    s.pop_back();
    cout<<s<<endl;
    return 0;
}

