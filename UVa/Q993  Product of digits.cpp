#include<bits/stdc++.h>
using namespace std;
vector<char> v;
int main() {
	int t;
	cin>>t;
	while(t--){
		v.erase(v.begin(),v.end());
		long long n;
		cin>>n;
		if(n==1){
			cout<<n<<"\n";
		}else{
			int i=9;
			while(i>1){
				if(n==1){
					break;
				}
				if(n%i==0){
					v.push_back(char(i+'0'));
					n/=i;
				}else{
					i--;
				}
			}
			if(n==1){
				reverse(v.begin(),v.end());
				for(int i=0;i<v.size();i++){
					cout<<v[i];
				}
				cout<<"\n";
			}else{
				cout<<-1<<"\n";
			}
		}
	}
	return 0;
}

