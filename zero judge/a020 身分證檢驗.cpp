#include<bits/stdc++.h>
using namespace std;
int main() {
	string a,s="==========ABCDEFGHJKLMNPQRSTUVXYWZIO";
	cin>>a;
	int x,ans=a[(a.size()-1)]-'0';
	for(int i=a.size()-2,j=1;i>0;i--,j++){
		ans+=(a[i]-'0')*j;
	}
	for(int i=10;i<s.size();i++){
		if(a[0]==s[i]){
			x=i;
			break;
		}
	}
	ans+=((x/10)+(x%10*9));
	if(ans%10==0){
		cout<<"real\n";
	}else{
		cout<<"fake\n";
	}
	return 0;
}
