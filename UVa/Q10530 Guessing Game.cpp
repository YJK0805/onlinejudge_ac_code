#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,l=0,r=11;
	string s,check[3]={"too high","too low","right on"};
	while(cin>>n&&n){
		cin.ignore();
		getline(cin,s);
		if(s==check[0]&&n<r){
			r=n;
		}else if(s==check[1]&&n>l){
			l=n;
		}else if(s==check[2]){
			if(n>l&&n<r){
				cout<<"Stan may be honest\n";
			}else{
				cout<<"Stan is dishonest\n";
			}
			l=0,r=11;
		}
	} 
	return 0;
}
