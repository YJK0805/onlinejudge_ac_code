#include<iostream>
using namespace std;
int main() {
	string s[3];
	int i;
	for(i=0;i<3;i++){
		cin>>s[i];
	}
	cout<<"Hello, ";
	for(i=0;i<3;i++){
		if(i!=2){
		cout<<s[i]<<", ";
		}else{
			cout<<"and "<<s[i]<<"!\n";
		}
	}
	return 0;
}
