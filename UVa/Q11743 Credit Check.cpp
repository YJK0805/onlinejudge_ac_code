#include <bits/stdc++.h>
using namespace std;
int main(){
	long long j,i,n;
	string s[4];
	cin >> n;
	long long sum1[n] = {0},sum2[n] = {0},sum3[n];
	for(i = 0;i < n;i++){
		sum2[i] = 0;
		for(j = 0;j < 4;j++){
			cin >> s[j];
			sum1[i] += s[j][1] + s[j][3] - 96;
			sum2[i] += ((s[j][0] - '0') * 2 % 10 + (s[j][0] - 48) * 2 / 10) + ((s[j][2] - '0') * 2 % 10 + (s[j][2] - '0') * 2 / 10);
		}
		sum3[i] = sum1[i] + sum2[i];
	}
	for(i = 0;i < n;i++){
		if(sum3[i] % 10 == 0){
			cout << "Valid\n";
		}else{
			cout << "Invalid\n";
		}
	}
	return 0;
}
