#include <bits/stdc++.h>
using namespace std;
long long n,s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(cin>>n){
		s=0;
		for(int i=1;i<n;i++){
			if(!(n%i)){
				s+=i;
			}
		}
		if(s==n){
			cout<<"������\n";
		}else if(s<n){
			cout<<"����\n";
		}else{
			cout<<"�ռ�\n";
		}
	}
	return 0;
}
