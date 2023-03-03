#include <bits/stdc++.h>
using namespace std;
long long h1,m1,h2,m2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>h1>>m1>>h2>>m2){
		if(!h1&&!m1&&!h2&&!m2){
			break;
		}
		m1+=(h1*60);
		m2+=(h2*60);
		if(m2<m1){
			m2+=(60*24);
		}
		cout<<m2-m1<<"\n";
	}
	return 0;
}
