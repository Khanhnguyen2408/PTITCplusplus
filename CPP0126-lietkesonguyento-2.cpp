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
	int n,m,t;
	cin>>t;
	while (t--){
		cin>>n>>m;
		if (n>m){
			int k=m;
			m=n;
			n=k;
		}
		for (int i=n;i<=m;i++){
			if(snt(i)==1){
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}