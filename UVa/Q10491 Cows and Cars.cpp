#include <bits/stdc++.h>
using namespace std;
int main(){
	double ans,ncow,ncar,nshow;
	while(cin>>ncow>>ncar>>nshow){
        ncow*=1.0;
        ncar*=1.0;
        nshow*=1.0;
        ans=((ncow/(ncar+ncow))*(ncar/(ncar+ncow-nshow-1))+(ncar/(ncar+ncow))*((ncar-1)/(ncar+ncow-nshow-1)))*1.0;
        cout<<fixed<<setprecision(5)<<ans<<"\n";
	}
	return 0;
}
