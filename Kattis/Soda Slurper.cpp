#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long e,f,c;
	cin>>e>>f>>c;
	e+=f;
	long long count=0;
	while(e>=c){
		count+=(e/c);
		e=(e%c)+(e/c);
	}
	cout<<count<<"\n";
	return 0;
}
