#include <bits/stdc++.h>
using namespace std;
long long parent[1000020],sz[1000020],n;
void init(){
	for(int i=0;i<=n*2;i++){
		parent[i]=i;
		sz[i]=1;
	}
}
int find_root(int x){
	if(x==parent[x]){
		return x;
	}
	return parent[x]=find_root(parent[x]);
}
void Union(int a,int b){
	long long pa=find_root(a),pb=find_root(b);
	if(sz[pa]>sz[pb]){
		swap(pa,pb);
	}
	parent[pa]=pb;
	sz[pb]+=sz[pa];
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s[3];
	long long a,b;
	cin>>n;
	init();
	while(cin>>s[0]>>s[1]>>s[2]>>a>>b){
		long long aa=find_root(a),bb=find_root(b);
		long long ra=find_root(a+n),rb=find_root(b+n);
		if(s[0]=="you"&&s[2]=="friends"){
			if(aa==rb){
				cout<<"angry\n";
			}else{
				Union(aa,bb);
				Union(ra,rb);
			}
		}else if(s[0]=="you"&&s[2]=="enemies"){
			if(aa==bb){
				cout<<"angry\n";
			}else{
				Union(aa,rb);
				Union(bb,ra);
			}
		}else if(s[0]=="are"&&s[2]=="friends"){
			if(aa==bb){
				cout<<"yeap\n";
			}else{
				cout<<"nope\n";
			}
		}else if(s[0]=="are"&&s[2]=="enemies"){
			if(aa==rb){
				cout<<"yeap\n";
			}else{
				cout<<"nope\n";
			}
		}
	}
	return 0;
}
