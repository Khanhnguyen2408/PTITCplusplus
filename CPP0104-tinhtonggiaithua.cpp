#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long a=1,s=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		a*=i;
		s=s+a;
	}
	cout<<s;
}