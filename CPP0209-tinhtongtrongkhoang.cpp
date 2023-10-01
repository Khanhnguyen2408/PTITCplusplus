#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		int n,b;
		cin>>n>>b;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		while (b--){
			int m,n;
			int sum=0;
			cin>>n>>m;
			for (int i=n-1;i<m;i++){
				sum+=a[i];
			}
			cout<<sum<<endl;
		}
	}
}