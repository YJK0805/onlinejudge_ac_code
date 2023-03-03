#include <bits/stdc++.h>
using namespace std;
double w,h,BMI;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>w>>h;
	h/=100.0;
	BMI=w/(h*h);
	cout<<fixed<<setprecision(1)<<BMI<<"\n";
	return 0;
}
