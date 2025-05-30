#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int ans = 0,x = 0;

		for(int i = 0; i < s.size(); i++){
			if(s[i] == '0'){
				if(x){
					ans += x + 1;
				}
			}
			else {
				x++;
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
