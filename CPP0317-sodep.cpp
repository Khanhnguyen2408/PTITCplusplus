#include <bits/stdc++.h>
using namespace std;
int ktra(string s){
	for (int i=0;i<s.length();i++){
			int num=s[i]-'0';
			if (num%2!=0){
				return 0;
				break;
		}
	}
	return 1;
}
int tn(string s){
	int l=0;
	int r=s.length()-1;
	int cnt=0;
	while (l<r){
		if (s[l]!=s[r]){
			return 0;
			break;
		}
		l++;
		r--;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while (t--){
		string s;
		getline(cin,s);
		if (ktra(s)==1&&tn(s)==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}