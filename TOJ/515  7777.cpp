#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	if(s.size()==4&&s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3]){
		cout<<"GREAT!!\n";
	}else{
		cout<<"OAQ\n";
	}
	return 0;
}

