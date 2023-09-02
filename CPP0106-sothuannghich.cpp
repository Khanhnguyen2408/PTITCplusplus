#include <iostream>
#include <math.h>
using namespace std;
long long thuanNghich(long long n){
	long long a=0,m=n;
	while (n!=0){
		a=a*10+n%10;
		n/=10;
	}
	if (a==m) return 1;
	else return 0;
}
int main(){
	long long n;
	int t;
	cin>>t;
	while (t--){
		cin>>n;
		if (thuanNghich(n)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}