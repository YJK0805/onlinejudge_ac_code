#include<iostream>
using namespace std;
int main() {
	string s1[2],s2[2];
	for(int i=0;i<2;i++){
		cin>>s1[i]>>s2[i];
	}
	if(s1[0]==s1[1]&&s2[0]==s2[1]){
		cout<<"GOOD\n";
	}else if(s1[0]==s1[1]||s2[0]==s2[1]){
		cout<<"=~=\n";
	}else{
		cout<<"OTZ\n";
	}
	return 0;
}
