#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int arr[n],ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j+1<n;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					ans++;
				}
			}
		}
		cout<<"Minimum exchange operations : "<<ans<<"\n";
	}
	return 0;
}

