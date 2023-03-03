#include <bits/stdc++.h>
using namespace std;
int h,m;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>h>>m;
	m+=(h*60);
	if(m>=(7*60+30)&&m<(17*60)){
		cout<<"At School\n";
	}else{
		cout<<"Off School\n";
	}
	return 0;
}
