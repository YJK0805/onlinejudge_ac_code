#include <bits/stdc++.h>
using namespace std;
int n;
long long num[3010],m[3010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>num[i];
			if(i){
				m[i]=abs(num[i]-num[i-1]);
			}
		}
		sort(m,m+n);
		bool check=true;
		for(int i=1;i<n;i++){
			if(m[i]!=i){
				check=false;
			}
		}
		if(check){
			cout<<"Jolly\n";
		}else{
			cout<<"Not jolly\n";
		}
	}
	return 0;
}
