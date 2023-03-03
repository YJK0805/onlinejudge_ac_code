#include <bits/stdc++.h>
using namespace std;
int main(){
	string p;
	long long i,a[9],max1,max2,ans,ans1;
	cin>>p;
	for(i=0;i<9;i++){
		a[i]=p[i]-48;
	}
	sort(a,a+9);
	max1=a[8];
	max2=a[7];
	ans=(p[8]-48)+(p[7]-48)*10+(p[6]-48)*100;
	ans1=max1*max1+max2*max2;
	if(ans==ans1){
		cout<<"Good Morning!\n";
	}else{
		cout<<"SPY!\n";
	}
	return 0;
}
