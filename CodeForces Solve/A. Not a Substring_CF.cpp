#include<iostream>
using namespace std;

void solve(){
    string s;
    cin>>s;
   if(s=="()"){
    cout<<"No"<<endl;
    return;
  }
  cout<<"Yes"<<endl;

   int flag=0;
   int x=s.size();
   for(int i=0; i<x-1; i++){
      if(s[i]==s[i+1])
      {flag=1;
      break; }
   }
   if(flag){
       for(int i=0; i<x; i++)
       cout<<"()";
       cout<<endl;
   }
   else{
       for(int i=0; i<x; i++)
       cout<<"(";
       for(int i=0; i<x; i++)
       cout<<")";
       cout<<endl;
   }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
