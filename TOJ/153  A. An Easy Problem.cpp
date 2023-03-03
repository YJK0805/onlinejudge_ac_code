#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n;
	cin>>n;
	vector<long long> a(3),b(3);
	while(n--){	
		for(int i=0;i<3;i++){
			cin>>b[i];
			a[i]=b[i]*b[i];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		if(b[2]>b[1]+b[0]){
			cout<<"illegal triangle\n";
		}else if(a[2]==a[0]+a[1]){
			cout<<"right triangle\n";
		}else if(a[2]<a[0]+a[1]){
			cout<<"obtuse triangle\n";
		}else if(a[2]>a[0]+a[1]){
			cout<<"acute triangle\n";
		}
	}
	return 0;
}
