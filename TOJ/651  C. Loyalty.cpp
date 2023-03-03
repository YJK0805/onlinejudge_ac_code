#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long i=2,n;
	cin>>n;
	while(n>=0){
		n-=i;
		i++;
	}
	cout<<i-1<<"\n";
	return 0;
}
