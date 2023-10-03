#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n;
	cin.ignore();
	while (n--){
		getline(cin,s);
		int sum=1;
		for (int i=0;i<s.length();i++){
			if (s[i]!=' '&&s[i+1]==' '){
				sum++;
			}
		}
		cout<<sum<<endl;
	}
}