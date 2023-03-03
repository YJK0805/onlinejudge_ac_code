#include <bits/stdc++.h>
using namespace std;
int m,num;
set <int> s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>m;
	while(m--){
		cin>>num;
		s.insert(num);
	}
	int n=s.size();
	cout<<n<<"\n";
	for(int i=0;i<n;i++){
		cout<<*s.begin()<<" ";
		s.erase(*s.begin());
	}
	cout<<"\n";
	return 0;
}
