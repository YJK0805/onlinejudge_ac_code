#include<bits/stdc++.h>
using namespace std;
int n,l,ans,arr[55];
int main(){
	cin>>n;
	while(n--){
		ans=0;
		cin>>l;
		for(int i=0;i<l;i++){
			cin>>arr[i];
		}
		for(int i=0;i<l-1;i++){
			for(int j=0;j+1<l;j++){
				if(arr[j]>arr[j+1]){
					swap(arr[j],arr[j+1]);
					ans++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<ans<<" swaps.\n";
	}
	return 0;
}

