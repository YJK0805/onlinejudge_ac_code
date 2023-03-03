#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a=1;
	string s;
	while(getline(cin,s)){
		for(int i=0;i<s.size();i++){
			if(s[i]==34&&a%2==1){
				cout<<"``";
				a++;
			}else if(s[i]==34&&a%2==0){
				cout<<"''";
				a++;
			}else{
				cout<<s[i];
			}
		}
		cout<<"\n";
	}
	return 0;
}
