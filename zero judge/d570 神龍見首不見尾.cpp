#include <bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	while(n>0){
		cout<<n<<"\n";
		n/=10;
	}
	return 0;
}
