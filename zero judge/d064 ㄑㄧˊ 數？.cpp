#include <bits/stdc++.h>
using namespace std;
string s[2]={"Even","Odd"};
int n;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	cout<<s[n%2]<<"\n";
	return 0;
}
