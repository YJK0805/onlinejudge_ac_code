#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a[3]={0},n,num;
	cin>>n;
	while(n--){
		cin>>num;
		a[num%3]++;
	}
	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
