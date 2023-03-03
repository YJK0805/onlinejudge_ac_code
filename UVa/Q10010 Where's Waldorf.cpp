#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t,a=0;
	cin>>t;
	int dir[8][2]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
	while(t--){
		if(a!=0){
			cout<<"\n";
		}else{
			a=1;
		}
		int m,n;
		cin>>m>>n;
		char c[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cin>>c[i][j];
			}
		}
		long long k;
		cin>>k;
		while(k--){
			string s;
			cin>>s;
			if(s[0]>='A'&&s[0]<='Z'){
				s[0]=char(s[0]-'A'+'a');
			}
			long long lens=s.length();
			for(int i=0;i<m;i++){
				int f=0;
				for(int j=0;j<n;j++){
					if(c[i][j]>='A'&&c[i][j]<='Z'){
						c[i][j]=char(c[i][j]-'A'+'a');
					}
					if(c[i][j]==s[0]){
						for(int l=0;l<8;l++){
							int x=i,y=j;
							f=1;
							for(int o=1;o<lens;o++){
								if(x+dir[l][0]>=0&&x+dir[l][0]<m&&y+dir[l][1]>=0&&y+dir[l][1]<n){
									x+=dir[l][0];
									y+=dir[l][1];
								}else{
									f=0;
									break;
								}
								if(c[x][y]>='A'&&c[x][y]<='Z'){
									c[x][y]=char(c[x][y]-'A'+'a');
								}
								if(s[o]>='A'&&s[o]<='Z'){
									s[o]=char(s[o]-'A'+'a');
								}
								if(c[x][y]==s[o]){
									f=1;
								}else{
									f=0;
									break;
								}
							}
							if(f==1){
								break;
							}
						}
					}
					if(f==1){
						cout<<i+1<<" "<<j+1<<"\n";
						break;
					}
				}
				if(f==1){
					break;
				}
			}
		}
	}
	return 0;
}
