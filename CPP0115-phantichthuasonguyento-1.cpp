#include <iostream>
#include <math.h>
using namespace std;
void pt(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			int cnt=0;
			while (n%i==0){
				++cnt;
				n/=i;
			}
		cout<<i<<" "<<cnt<<" ";
		}
	}	
	if (n!=1){
		cout<<n<<" 1";
	}
	
}
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		pt(n);
		cout<<endl;
	}
}