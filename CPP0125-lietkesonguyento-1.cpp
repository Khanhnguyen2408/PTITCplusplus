#include <iostream>
#include <math.h>
using namespace std;
int snt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int n,m;
	cin>>n>>m;
	if (n>m){
		int t=m;
		m=n;
		n=t;
	}
	for (int i=n;i<=m;i++){
		if(snt(i)==1){
			cout<<i<<" ";
		}
	}
}