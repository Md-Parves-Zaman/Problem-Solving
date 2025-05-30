#include<iostream>
#include<string>
#include<set>
using namespace std;
bool distrinctDigit(int year){
    string yearStr=to_string(year);
    set <char> digits;
    for(char c:yearStr){
        if(digits.count(c)>0){
            return false;
        }
        digits.insert(c);
    }
    return true;
}


int main(){
    int y;
    cin>>y;
    for(int year=y+1;year<=9999;year++){
        if(distrinctDigit(year)){
            cout<<year<<endl;
            break;
        }
    }
}

