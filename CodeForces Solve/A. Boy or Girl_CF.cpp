#include <iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main(){
    string name;
    cin>>name;
    unordered_set<char>distinct_chars;
    for(char c: name){
        distinct_chars.insert(c);
    }
    if(distinct_chars.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
