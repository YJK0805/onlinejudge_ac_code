#include <bits/stdc++.h>
using namespace std;
long long a,b,ans;
char c;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>a>>c>>b){
		if(c=='+'){
			ans=a+b;
		}else if(c=='-'){
			ans=a-b;
		}else if(c=='*'){
			ans=a*b;
		}else{
			ans=a/b;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
