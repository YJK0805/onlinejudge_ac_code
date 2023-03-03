#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,ans,r;
	char c;
	cin>>a>>c>>b;
	if(c=='+'){
		ans=a+b;
		cout<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='-'){
		ans=a-b;
		cout<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='*'){
		ans=a*b;
		cout<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='/'){
		if(b!=0){
			ans=a/b;
			r=a%b;
			cout<<a<<" "<<c<<" "<<b<<" = "<<ans<<" ... "<<r<<"\n"; 
		}else{
			cout<<"ERROR\n";
		}
	}
	return 0;
}
