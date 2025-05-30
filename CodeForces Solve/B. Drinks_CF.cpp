#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	double p,ctr=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p;
		ctr+=p;
	}

	cout<<fixed<<setprecision(12)<<ctr/n<<endl;
	return 0;
}