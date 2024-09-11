#include <iostream>
#include <math.h>
using namespace std;
int count(long long n){
	int cnt=0;
	while(n!=0){
		++cnt;
		n/=10;
	}
	return cnt;
}
bool ams(int n){
	int sum=0,tmp=n;
	int d = count(n);
	while(n){
		sum+=(long long)pow(n%10,d);
		n/=10;
	}
	return sum==tmp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a;
		long long sum=0;
		cin>>a;
		int b=ams(a);
		cout<<b<<endl;
	}
}