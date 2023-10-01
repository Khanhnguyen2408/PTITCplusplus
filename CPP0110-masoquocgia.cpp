#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while (t--){
		string str;
		getline(cin,str);
		int n=str.length();
		for (int i=0;i<n;i++){
			if (str[i]=='0'&&str[i+1]=='8'&&str[i+2]=='4'){
				str.erase(i,3);
			}
		}
		cout<<str<<endl;
	}
}