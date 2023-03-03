#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	while(b){
		int t=a%b;
		a=b;
		b=t;
	}
	return a; 
}
int main() {
	int n;
	while(cin>>n){
		long long a[n];
		cin.ignore();
		for(int i=0;i<n;i++){
			string s;
			getline(cin,s);
			a[i]=s.size();
			cout<<a[i]<<"\n";
		}
		int max=a[0],min=a[0];
		for(int i=1;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
			if(a[i]<min){
				min=a[i];
			}
		}
		cout<<min<<" "<<max<<" "<<gcd(min,max)<<"\n";
	}
	return 0;
}

