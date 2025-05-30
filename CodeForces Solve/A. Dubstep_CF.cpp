#include <iostream>
using namespace std;

int main() {
	string str;
	int flag=0;
	cin>>str;
	for(int i=0;i<str.length();i++){
        if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
            i+=2;
            if(flag){
                cout<<" ";
            }
            continue;
        }else{
            flag=1;
            cout<<str[i];
        }
	}
	return 0;
}
