#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	while(cin>>a>>b&&a&&b){
		long long x=int(sqrt(b)),y=int(sqrt(a));
		if(y*y!=a){
			y++;
		}
		cout<<x-y+1<<"\n";
	}
	return 0;
}
