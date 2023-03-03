#include <bits/stdc++.h>
using namespace std;
long long ans,n,f,area,num,level;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n--){
		cin>>f;
		ans=0;
		while(f--){
			cin>>area>>num>>level; 
			ans+=(area*level);
		}
		cout<<ans<<"\n";	
	}
	return 0;
}
