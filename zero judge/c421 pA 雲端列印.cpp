#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	multiset <int> p;
	long long n;
	while(cin>>n&&n){
		if(n>0){
			p.insert(n);
		}else if(!p.empty()){
			if(n==-2){
				cout<<*p.rbegin()<<" ";
				p.erase(p.find(*p.rbegin()));
			}else{
				cout<<*p.begin()<<" ";
				p.erase(p.find(*p.begin()));
			}
		}
	}
	cout<<"\n"; 
	return 0;
}
