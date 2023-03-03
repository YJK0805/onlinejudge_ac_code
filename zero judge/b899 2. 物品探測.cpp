#include <bits/stdc++.h>
using namespace std;
int x[4],y[4],m,len[3][3];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	m=0;
	for(int i=0;i<3;i++){
		cin>>x[i]>>y[i];
	}
	if(sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2))>sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2))){
		x[3]=x[0]+x[1]-x[2];
		y[3]=y[0]+y[1]-y[2];
	}else if(sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2))<sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2))){
		x[3]=x[1]+x[2]-x[0];
		y[3]=y[1]+y[2]-y[0];
	}
	if(sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2))>sqrt(pow((x[2]-x[0]),2)+pow((y[2]-y[0]),2))){
		x[3]=x[0]+x[1]-x[2];
		y[3]=y[0]+y[1]-y[2];
	}else if(sqrt(pow((x[0]-x[1]),2)+pow((y[0]-y[1]),2))<sqrt(pow((x[2]-x[0]),2)+pow((y[2]-y[0]),2))){
		x[3]=x[2]+x[0]-x[1];
		y[3]=y[2]+y[0]-y[1];
	}
	if(sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2))>sqrt(pow((x[2]-x[0]),2)+pow((y[2]-y[0]),2))){
		x[3]=x[1]+x[2]-x[0];
		y[3]=y[1]+y[2]-y[0];
	}else if(sqrt(pow((x[1]-x[2]),2)+pow((y[1]-y[2]),2))<sqrt(pow((x[2]-x[0]),2)+pow((y[2]-y[0]),2))){
		x[3]=x[2]+x[0]-x[1];
		y[3]=y[2]+y[0]-y[1];
	}
	cout<<x[3]<<" "<<y[3]<<"\n";
	return 0;
}
