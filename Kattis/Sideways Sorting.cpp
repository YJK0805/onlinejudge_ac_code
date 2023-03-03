#include <bits/stdc++.h>
using namespace std;
string s[20];
bool cmp(string a,string b){
	for(int i=0;i<a.size();i++){
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	if(a!=b){
		return a<b;
	}else{
		return a>b;
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);	
	long long r,c,f=0;
	while(cin>>r>>c&&r&&c){
		for(int i=0;i<c;i++){
			s[i]="";
		}
		if(f){
			cout<<"\n";
		}else{
			f=1;
		}
		char a;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a;
				s[j]+=a;
			}
		}
		stable_sort(s,s+c,cmp);
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cout<<s[j][i];
			}
			cout<<"\n";
		}
	}
	return 0;
}
