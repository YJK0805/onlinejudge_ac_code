#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	queue <long long> a;
	while(n--){
		long long k;
		cin>>k;
		if(k==1){
			long long x;
			cin>>x;
			a.push(x);
		}else if(k==2){
			long long ans=a.front();
			if(!a.empty()){
				cout<<ans<<"\n";
			}else{
				cout<<-1<<"\n";
			}
		}else if(k==3&&!a.empty()){
			a.pop();
		}
	} 
	return 0;
}
