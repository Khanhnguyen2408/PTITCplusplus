#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		float a,b,c,d;
		cin>>a>>b>>c>>d;
		float m=a-c;
		float n=b-d;
		float kc=sqrt(m*m+n*n);
		cout<<fixed<<setprecision(4)<<kc<<endl;
	}
}