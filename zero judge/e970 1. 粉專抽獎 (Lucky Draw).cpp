#include <bits/stdc++.h>
using namespace std;
int n,num[10010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		int sum=0,b=num[n-1];
		for(int i=1;i<=n;i++){
			if(i%b==1){
				sum+=num[i-1];
			}
		}
		int ans=sum%n;
		if(ans==0){
			cout<<n<<" "<<num[n-1]<<"\n";
		}else{
			cout<<ans<<" "<<num[ans-1]<<"\n";
		}
		
	}
	return 0;
}
