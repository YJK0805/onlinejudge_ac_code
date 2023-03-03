#include<bits/stdc++.h>
using namespace std;
char c[150];
int main() {
	int t,time=1;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ans=0;
		for(int i=0;i<n;i++){
			cin>>c[i];
		}
		for(int i=0;i<n;i++){
			if(c[i]=='.'){
				ans++;
				c[i]='#';
				c[i+1]='#';
				c[i+2]='#';
			}
		}
		cout<<"Case "<<time<<": "<<ans<<"\n";
		time++;
	}
	return 0;
}

