#include <bits/stdc++.h>
using namespace std;
stack <long long> st;
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	long long a;
	while(n--){
		cin>>a;
		if(a==1){
			st.pop();
		}else if(a==2){
			cout<<st.top()<<"\n";
		}else{
			cin>>a;
			st.push(a);
		}
	}
	return 0;
}
