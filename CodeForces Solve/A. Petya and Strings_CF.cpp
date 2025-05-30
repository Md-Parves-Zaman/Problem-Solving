#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string first,second;
    cin>>first>>second;

    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    if(first.compare(second)<0){
        cout<<"-1"<<endl;
    }
    else if(first.compare(second)>0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
