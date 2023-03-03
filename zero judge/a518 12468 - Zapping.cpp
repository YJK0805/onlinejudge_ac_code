#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	while(cin>>a>>b){
		if(a!=-1&&b!=-1){
			int ans,ans1=b-a,ans2=a-b;
			if(ans1<0){
				ans1+=100;
			}
			if(ans2<0){
				ans2+=100;
			}
			ans=min(ans1,ans2);
			cout<<ans<<"\n";
		}else{
			break;
		}
	}
	return 0;
}
