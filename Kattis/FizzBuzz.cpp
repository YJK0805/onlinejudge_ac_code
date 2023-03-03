#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long x,y,n;
	cin>>x>>y>>n;
	for(int i=1;i<=n;i++){
		if(!(i%x)&&!(i%y)){
			cout<<"FizzBuzz\n";
		}else if(!(i%x)){
			cout<<"Fizz\n";
		}else if(!(i%y)){
			cout<<"Buzz\n";
		}else{
			cout<<i<<"\n";
		}
	}
	return 0;
}
