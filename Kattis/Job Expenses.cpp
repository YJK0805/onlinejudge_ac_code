#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,a,count=0;
	cin>>n;
	while(n--){
		cin>>a;
		if(a<0){
			count+=abs(a);
		}
	}
	cout<<count<<"\n";
	return 0;
}
