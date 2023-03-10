#include <bits/stdc++.h>
using namespace std;
void toE(int* arr){
	swap(arr[0],arr[5]);
	swap(arr[3],arr[0]);
	swap(arr[1],arr[3]);
}
void toW(int* arr){
	swap(arr[0],arr[3]);
	swap(arr[5],arr[0]);
	swap(arr[1],arr[5]);
}
void toN(int* arr){
	swap(arr[0],arr[2]);
	swap(arr[4],arr[0]);
	swap(arr[1],arr[4]);
}
void toS(int* arr){
	swap(arr[0],arr[4]);
	swap(arr[2],arr[0]);
	swap(arr[1],arr[2]);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    while(cin >> t && t){
    	int dice[6] = {1,6,2,3,5,4};
    	while(t--){
    		string s;
    		cin >> s;
    		if(s == "north"){
                toN(dice);
            }else if(s == "south"){
                toS(dice);
            }else if(s == "west"){
                toW(dice);
            }else if(s == "east"){
                toE(dice);
            }
    	}
    	cout << dice[0] << "\n";
    }
    return 0;
}
