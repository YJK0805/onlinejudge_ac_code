#include <bits/stdc++.h>
using namespace std;
int a[128]={0},ac[128]={0},n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>n;
	cin.ignore();
	while(n--){
		for(int i='a';i<='z';i++){
			a[i]=0;
		}
		getline(cin,s);
		for(long long i=0;i<s.size();i++){
			if(s[i]>='A'&&s[i]<='Z'){
				a[(s[i]-'A'+'a')]++;
			}else if(s[i]>='a'&&s[i]<='z'){
				a[(s[i])]++;
			}
		}
		for(int i='a',j=0;i<='z';i++,j++){
			ac[j]=a[i];
		}
		sort(ac,ac+26);
		int max=ac[25];
		for(int i='a';i<='z';i++){
			if(a[i]==max){
				cout<<(char)(i);
			}
		}
		cout<<'\n';
	}
}
