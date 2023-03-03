#include <bits/stdc++.h>
using namespace std;
int m=0,score;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(int i=0;i<3;i++){
		cin>>score;
		m=max(m,score);
	}
	cout<<m<<"\n";
	return 0;
}
