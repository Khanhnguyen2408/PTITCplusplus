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
		for (int i=b;i<n;i++){
			cout<<a[i]<<" ";
		}
		for (int i=0;i<b;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}