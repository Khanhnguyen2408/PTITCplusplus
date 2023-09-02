#include <iostream>
using namespace std;
int locphat(int n){
	while (n>0){
		int k=n%10;
		if(k!=6&&k!=8&&k!=0){
			return 0;
			break;
		}
		else{
			n/=10;
		}
	}
	return 1;
}
int main(){
	int t,n;
	cin>>t;
	while (t--){
		cin>>n;
		if(locphat(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}