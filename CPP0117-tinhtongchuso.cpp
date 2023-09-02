#include <iostream>
#include <math.h>
using namespace std;
//su dung de quy
int summary(int n){
	int sum=0;
	if(n<10) return n;
	while (n!=0){
		sum+=n%10;
		n/=10;
	}
	return summary(sum);
}
int main(){
	int n,t;
	cin>>t;
	while (t--){
		cin>>n;
		cout<<summary(n)<<endl;
	}
}