#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		if (n%100==86) {
			cout<<"1"<<endl;
		}
		else cout<<"0"<<endl;
	}
}