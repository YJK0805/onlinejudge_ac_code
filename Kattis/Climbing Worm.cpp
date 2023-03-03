#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long a,b,h;
	cin>>a>>b>>h;
	long long now=0,count=0;
	while(now<h){
		now+=a;
		count++;
		if(now>=h){
			break;
		}else{
			now-=b;
		}
	}
	cout<<count<<"\n";
	return 0;
}
