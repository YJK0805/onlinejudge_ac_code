#include <bits/stdc++.h>
using namespace std;
vector<long long> v;
long long bsearch(long long num){
	long long l = 0,r = v.size() - 1;
	while(l <= r){
		long long mid = (l + r) / 2;
		if(v[mid] == num){
			return mid;
		}else if(v[mid] > num){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}
	return -1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin >> n >> k;
    v.resize(n);
    for(int i = 0;i < n;i++){
    	cin >> v[i];
    }
    long long num;
    for(int i = 0;i < k;i++){
    	cin >> num;
    	cout << bsearch(num) + 1 << "\n";
    }
    return 0;
}
