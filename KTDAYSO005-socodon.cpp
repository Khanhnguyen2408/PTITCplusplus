#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum=0;
		cin>>n;
		int a[100005,b[1000001]={0};
		for (int i=0;i<n;i++){
			cin>>a[i];
			b[a[i]]++;
		}
		for (int i=0;i<n;i++){
			if (b[a[i]]==1){
				sum+=1;
			}
		}
		cout<<sum<<endl;

	}
	return 0;
}