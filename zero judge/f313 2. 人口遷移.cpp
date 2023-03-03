#include <bits/stdc++.h>
using namespace std;
int a[60][60],b[60][60],dy[4]={-1,0,1,0},dx[4]={0,1,0,-1};
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int r,c,k,m;
	cin>>r>>c>>k>>m;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(int l=0;l<m;l++){
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(a[i][j]!=-1){
					int p=a[i][j]/k,time=0;
					for(int d=0;d<4;d++){
						if(i+dx[d]>=0&&i+dx[d]<r&&j+dy[d]>=0&&j+dy[d]<c){
							if(b[i+dx[d]][j+dy[d]]!=-1){
								b[i+dx[d]][j+dy[d]]+=p;
								time++;
							}
						}
					}
					b[i][j]-=(time*p);
				}
			}
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				a[i][j]=b[i][j];
			}
		}
	}
	long long max=-1,min=10000;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
			if(a[i][j]<min&&a[i][j]!=-1){
				min=a[i][j];
			}
		}
	}
	cout<<min<<"\n"<<max<<"\n";
	return 0;
}
