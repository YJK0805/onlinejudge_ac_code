#include <bits/stdc++.h>
using namespace std;
long long a[1010];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin>>n;
	long long t=1;
	while(n--){
		long long g;
		cin>>g;
		for(int i=0;i<g;i++){
			cin>>a[i];
		}
		sort(a,a+g);
		for(int i=0;i<g;i++){
			if(a[i]!=a[i+1]){
				cout<<"Case #"<<t<<": "<<a[i]<<"\n";
			}else{
				i++;
			}
		}
		t++;
	}
	return 0;
}
