#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	long long n,f=0,i,j,c,lens;
	while(cin>>n){
		f=0;
		if(n==0){
			break;
		}else{
			cin>>s;
			lens=s.length();
			c=lens/n;
			for(i=c-1;i<lens;i+=c){
				for(j=i;j>=c*f;j--){
					cout<<s[j];
				}
				f++;
			}
			cout<<"\n";
		}
	}
	return 0;
}
