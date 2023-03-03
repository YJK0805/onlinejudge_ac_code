#include <bits/stdc++.h>
using namespace std;
long long f(int a){
	return 2*a-3;
}
long long g(int a,int b){
	return 2*a+b-7;
}
long long h(int a,int b,int c){
	return 3*a-2*b+c;
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
		}else if(s[i]=='h'){
			long long a=st.top(),b,c;
			st.pop();
			b=st.top();
			st.pop();
			c=st.top();
			st.pop();
			st.push(h(a,b,c));
		}else if(s[i]==' '){
			continue;
		}
	}
	cout<<st.top()<<"\n";
	return 0;
}
