#include <iostream>
#include <math.h>
using namespace std;
int gcd(int a,int b){
	if (a==0||b==0){
		return a+b;
	}
	while (a!=b){
		if (a>b){
			a-=b;
		}
		else {
			b-=a;
		}
	}
	return a;
}
int lcm(int a,int b){
	int k=(a*b)/gcd(a,b);
	return k;
}
int main(){
	int a,b,t;
	cin>>t;
	while (t--){
		cin>>a>>b;
		cout<<lcm(a,b)<<" "<<gcd(a,b)<<endl;
	}
}