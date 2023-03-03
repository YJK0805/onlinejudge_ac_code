#include<bits/stdc++.h>
using namespace std;
bool used[1024],check[1024];
struct node{
	int val,dis;
};
node q[2000000];
int bfs(int s,int t){
	node cur,nxt;
	memset(used,false,sizeof(used));
	q[0].val=s;
	q[0].dis=0;
	used[s]=true;
	for(int i=0,j=1;i<j;i++){
		cur=q[i];
		if(cur.val==t){
			return cur.dis;
		}else{ 
			for(int k=2;k<cur.val;k++){
				if(cur.val%k==0&&check[k]){
					if(cur.val+k<=t&&!used[cur.val+k]){
						nxt=cur;
						nxt.val+=k;
						nxt.dis++;
						used[nxt.val]=true;
						q[j]=nxt;
						j++;
					}
				}
			}
		}
	}
	return -1;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int s,t;
	long long c=1;
	memset(check,true,sizeof(check));
	for(int i=2;i<1024;i++){
		for(int j=2;j<i;j++){
			if(i%j==0){
				check[i]=false;
			}
		}
	}
	while(cin>>s>>t&&s&&t){
		cout<<"Case "<<c<<": "<<bfs(s,t)<<"\n";
		c++;
	}
	return 0;
}

