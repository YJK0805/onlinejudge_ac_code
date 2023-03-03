#include <bits/stdc++.h>
using namespace std;
set<long long> s;
int main(){
	long long n;
	cin>>n;
	long long a;
	while(n--){
		cin>>a;
		s.insert(a);
	}
	cout<<s.size()<<"\n";
	while(s.size()){
		cout<<*s.begin()<<" ";
		s.erase(*s.begin());
	}
	return 0;
}
