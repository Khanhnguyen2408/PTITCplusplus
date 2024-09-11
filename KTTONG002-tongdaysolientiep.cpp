#include <iostream>
using namespace std;
long long Sum(long long a,long long b){
	if (a>b) return 0;
	long long n=(b-a)/1+1;
	return (a+b)*n/2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long sum=Sum(a,b);
		cout<<sum<<endl;
	}
}