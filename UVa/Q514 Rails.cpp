#include <bits/stdc++.h>
using namespace std;
long long a[1010],n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		if(n==0){
			break;
		}
		while(1){
			long long p=1,i;
			stack<long long> s;
			cin>>a[0];
			if(a[0]){
				for(int i=1;i<n;i++){
					cin>>a[i];
				}
				for(i=0;i<n;i++){
					if(!s.empty()&&s.top()==a[i]){
						s.pop();
					}else if(a[i]>=p){
						for(int j=p;j<a[i];j++){
							s.push(j);
						}
						p=a[i]+1;
					}else{
						break;
					}
				}
				if(i==n){
					cout<<"Yes\n";
				}else{
					cout<<"No\n";
				}
			}else{
				break;
			}
		}
		cout<<"\n";
	}
	return 0;
}
