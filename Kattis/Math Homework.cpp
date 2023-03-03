#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long b,c,d,l,f=1;
	cin>>b>>c>>d>>l;
	for(int i=0;i<=l/b;i++){
		for(int j=0;j<=l/c;j++){
			for(int k=0;k<=l/d;k++){
				if(i*b+j*c+k*d==l){
					cout<<i<<" "<<j<<" "<<k<<"\n";
					f=0;
				}
			}
		}
	}
	if(f){
		cout<<"impossible\n";
	}
	return 0;
}
