#include<bits/stdc++.h>
using namespace std;
int main() {
	string s[11];
	for(int i=1;i<11;i++){
		s[i]="EMPTY";
	}
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string a;
		int x;
		cin>>a>>x;
		s[x]=a;
	}
	for(int i=1;i<11;i++){
		cout<<s[i]<<"\n";
	}
	return 0;
}

