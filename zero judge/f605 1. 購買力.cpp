#include <bits/stdc++.h>
using namespace std;
int n,d,price[3],ansnum,anspri;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>d;
	ansnum=0;
	anspri=0;
	while(n--){
		for(int i=0;i<3;i++){
			cin>>price[i];
		}
		sort(price,price+3);
		if(price[2]-price[0]>=d){
			ansnum++;
			anspri+=((price[2]+price[1]+price[0])/3);
		}
	}
	cout<<ansnum<<" "<<anspri<<"\n";
	return 0;
}
