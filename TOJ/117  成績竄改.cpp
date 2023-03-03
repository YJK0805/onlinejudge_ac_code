#include<bits/stdc++.h>
using namespace std;
int main() {
	long long max=0,n,score;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>score;
		if(score>max){
			max=score;
		}
	}
	cout<<max<<"\n";
	return 0;
}
