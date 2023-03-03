#include <bits/stdc++.h>
using namespace std;
long long f(int a){
	return 2*a-1;
}
long long g(int a,int b){
	return a+2*b-3;
}
int main(){
	string s;
	stack <int> st;
	getline(cin,s);
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>='0'&&s[i]<='9'){
			long long a=s[i]-'0',b=10;
			while(i--){
				if(s[i]==' '){
					st.push(a);
					break;
				}else if(s[i]=='-'){
					a*=-1;
					st.push(a);
					break;
				}else{
					a+=(s[i]-'0')*b;
					b*=10;
				}
			}
		}else if(s[i]=='f'){
			long long a=st.top(),b;
			st.pop();
			st.push(f(a));
		}else if(s[i]=='g'){
			long long a=st.top(),b;
			st.pop();
			b=st.top();
			st.pop();
			st.push(g(a,b));
		}else if(s[i]==' '){
			continue;
		}
	}
	cout<<st.top()<<"\n";
	return 0;
}
