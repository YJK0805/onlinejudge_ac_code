#include<bits/stdc++.h>
using namespace std;

int main() {
	int a=0,b;
	string n;
	cin>>b>>n;
	for(int i=n.length()-1,j=0;i>=0;i--,j++){
		a+=(n[j]-'0')*pow(b,i);
	}
	int a1=0;
	for(int i=0;i<n.length();i++){
		a1+=pow(n[i]-'0',n.length());
	}
	if(a==a1){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}

