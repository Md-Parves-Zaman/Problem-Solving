#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    char s[100];
    cin>>s;
    int ctrUpper=0,ctrLower=0;
    for(int i=0;i<strlen(s);i++){
        if(isupper(s[i])){
            ctrUpper+=1;
        }
        else{
            ctrLower+=1;
        }
    }
    if(ctrLower>=ctrUpper){
        transform(s, s + strlen(s), s, ::tolower);
        cout<<s<<endl;
    }
    else{
        transform(s, s + strlen(s), s, ::toupper);
        cout<<s<<endl;
    }
}
