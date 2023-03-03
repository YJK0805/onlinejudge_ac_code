#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int bt=a*60+b,at=c*60+d;
	if(at-bt<0){
		at+=24*60;
		cout<<"totally "<<(at-bt)/60<<" hours and "<<(at-bt)%60<<" minutes.\n";
	}else{
		cout<<"totally "<<(at-bt)/60<<" hours and "<<(at-bt)%60<<" minutes.\n";
	}
	return 0;
}

