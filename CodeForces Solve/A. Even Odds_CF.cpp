#include<iostream>
using namespace std;

long long findNumber(long long n,long long k){
		long long ctrOdd=(n+1)/2;
		if(k<=ctrOdd){
			return (2*k)-1;
		}else{
			return 2*(k-ctrOdd);
		}
	}


int main(){
	long long n,k;
	cin>>n>>k;
	long long result= findNumber(n,k);
	cout<<result<<endl;
	return 0;
}