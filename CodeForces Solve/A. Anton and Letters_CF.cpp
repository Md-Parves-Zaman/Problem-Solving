#include<iostream>
#include<cctype>
#include<set>
using namespace std;
int main(){
    string str;
    set<char> s;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(islower(str[i])){
            s.insert(str[i]);
        }
    }
    cout<<s.size()<<endl;
    return 0;
}
