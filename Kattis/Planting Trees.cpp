#include<bits/stdc++.h>
using namespace std;
long long a[100010];
int main() {
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	reverse(a,a+n);
	long long day1=a[0],day2=1;
	for(int i=1;i<n;i++){
		day2++;
		day1--;
		if(day1<a[i]){
			day1=a[i];
		}
	}
	cout<<day1+day2+1<<"\n";
	return 0;
}
