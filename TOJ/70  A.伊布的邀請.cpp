#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	double r1,i1,r2,i2,ans1,ans2;
	char d;
	cin>>r1>>i1>>d>>r2>>i2;
	if(d=='+'){
		ans1=(r1+r2)*1.0;
		ans2=(i1+i2)*1.0;
	}else if(d=='-'){
		ans1=(r1-r2)*1.0;
		ans2=(i1-i2)*1.0;
	}else if(d=='*'){
		ans1=(r1*r2-i1*i2)*1.0;
		ans2=(r1*i2+r2*i1)*1.0;
	}else{
		ans1=((r1*r2+i1*i2)*1.0)/(r2*r2+i2*i2)*1.0;
		ans2=((i1*r2-r1*i2)*1.0)/(r2*r2+i2*i2)*1.0;
	}
	if(ans2<0){
		cout<<fixed<<setprecision(2)<<ans1<<ans2<<"i\n";
	}else{
		cout<<fixed<<setprecision(2)<<ans1<<"+"<<ans2<<"i\n";
	}
	return 0;
}
