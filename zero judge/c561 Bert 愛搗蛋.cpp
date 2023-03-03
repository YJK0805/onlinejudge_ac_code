#include <bits/stdc++.h>
using namespace std;
int n,num,curnum,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	ans=0;
	for(int i=0;i<n;i++){
		cin>>num;
		curnum=0;
		while(num>0){
			curnum=curnum*10+num%10;
			num/=10;
		}
		ans=max(ans,curnum);
	}
	cout<<ans<<"\n";
	return 0;
}
