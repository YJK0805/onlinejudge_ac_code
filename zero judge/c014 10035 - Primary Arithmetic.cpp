#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>a>>b){
		if(a==0&&b==0){
			break;
		}
		int cur=0,ans=0;
		while(1){
			if(a==0&&b==0){
				break;
			}
			cur+=(a%10+b%10);
			a/=10;
			b/=10;
			ans+=(cur/10);
			cur/=10;
		}
		if(ans){
			if(ans>1){
				cout<<ans<<" carry operations.\n";
			}else{
				cout<<ans<<" carry operation.\n";
			}
		}else{
			cout<<"No carry operation.\n";
		}
	}
	return 0;
}
