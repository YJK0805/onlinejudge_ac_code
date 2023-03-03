#include<bits/stdc++.h>
using namespace std;
struct num{
	long long a,b,r;
};
num a[10050];
bool cmp(num a,num b){
	if(a.r!=b.r){
		return a.r<b.r;
	}else if(a.b!=b.b){
		return a.b<b.b;
	}else if(a.b==1){
		return a.a>b.a;
	}else{
		return a.a<b.a;
	}
}
int main() {
	long long n,m;
	while(cin>>n>>m&&n&&m){
		for(int i=0;i<n;i++){
			cin>>a[i].a;
			if(a[i].a%2==0){
				a[i].b=2;
			}else{
				a[i].b=1;
			}
			a[i].r=a[i].a%m;
		}
		sort(a,a+n,cmp);
		cout<<n<<" "<<m<<"\n";
		for(int i=0;i<n;i++){
			cout<<a[i].a<<"\n";
		}
	}
	cout<<0<<" "<<0<<"\n"; 
	return 0;
}
