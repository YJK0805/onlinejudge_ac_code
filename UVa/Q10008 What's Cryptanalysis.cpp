#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
struct co{
	char ch;
	int t;
};
co c[26];
bool cmp(co a,co b){
	if(a.t!=b.t){
		return a.t>b.t;
	}else{
		return a.ch<b.ch;
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<26;i++){
		c[i].t=0;
		c[i].ch=char(i+'A');
	}
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		getline(cin,s);
		for(int j=0;j<s.size();j++){
			if(s[j]>='a'&&s[j]<='z'){
				c[s[j]-'a'].t++;
			}
			if(s[j]>='A'&&s[j]<='Z'){
				c[s[j]-'A'].t++;
			}
		}
	}
	sort(c,c+26,cmp);
	for(int i=0;i<26;i++){
		if(c[i].t!=0){
			cout<<c[i].ch<<" "<<c[i].t<<"\n";
		}else{
			break;
		} 
	}
	return 0;
}
