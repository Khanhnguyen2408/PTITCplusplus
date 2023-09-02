#include <iostream>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while (t--){
		long long sum=0;
		cin>>n;
		for (int i=1;i<=n;i++){
			sum+=i;
		}
		cout<<sum<<endl;
	}
}