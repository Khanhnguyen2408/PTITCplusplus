#include <iostream>
using namespace std;
long long sumOddNumbers(long long a,long long b){
	if (a%2==0) a++;
	if (b%2==0) b--;
	if (a>b) return 0;
	long long n=(b-a)/2+1;
	return (a+b)*n/2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long sum=sumOddNumbers(a,b);
		cout<<sum<<endl;
	}
}