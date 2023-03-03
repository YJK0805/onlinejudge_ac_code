#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	while(cin>>n){
		char c[n][100];
		long long a=0,l=0;
		string s;
		cin.ignore();
		getline(cin,s);
		for(int i=0;i<s.length();i++){
				if(a<n){
					c[a][l]=s[i];
					a++;
				}else{
					a=0;
					l++;
					c[a][l]=s[i];
					a++;
				}
			}
		for(int i=0;i<n;i++){
			for(int j=0;j<=l;j++){
				cout<<c[i][j];
			}
		}
		cout<<"\n";
	}
	return 0;
}
