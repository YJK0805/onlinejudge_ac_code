#include <bits/stdc++.h>
using namespace std;
int main(){
	double a,b,ans,r;
	char c;
	cin>>a>>c>>b;
	if(c=='+'){
		ans=a+b;
		cout<<fixed<<setprecision(4)<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='-'){
		ans=a-b;
		cout<<fixed<<setprecision(4)<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='*'){
		ans=a*b;
		cout<<fixed<<setprecision(4)<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n";
	}else if(c=='/'){
		if(b!=0){
			ans=a/b;
			cout<<fixed<<setprecision(4)<<a<<" "<<c<<" "<<b<<" = "<<ans<<"\n"; 
		}else{
			cout<<"ERROR\n";
		}
	}
	return 0;
}
