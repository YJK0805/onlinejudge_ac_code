#include <bits/stdc++.h>
using namespace std;
int h1,m1,h2,m2,ansh,ansm;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>h1>>m1>>h2>>m2;
	m1+=(h1*60);
	m2+=(h2*60);
	if(m2<m1){
		m2+=(60*24);
	}
	ansm=(m2-m1)%60;
	ansh=(m2-m1)/60;
	cout<<ansh<<" "<<ansm<<"\n";
	return 0;
}
