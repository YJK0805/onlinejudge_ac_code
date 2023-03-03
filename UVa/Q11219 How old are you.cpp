#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t;
    cin >> t;
    long long year,times = 1,f = 1,now_day,now_month,now_year,birth_day,birth_month,birth_year;
    char c;
    while(t--){
    	cin >> now_day >> c >> now_month >> c >> now_year >> birth_day >> c >> birth_month >> c >> birth_year;
    	if(birth_year > now_year){
    		f = 0;
    	}else if(birth_year == now_year){
    		if(birth_month > now_month){
    			f = 0;
    		}else if(birth_month == now_month){
    			if(birth_day > now_day){
    				f = 0;
    			}else{
    				year = birth_year - now_year;
    			}
    		}else{
    			year = birth_year - now_year;
    		}
    	}else{
    		if(birth_month > now_month){
    			year = now_year - birth_year - 1;
    		}else if(birth_month == now_month){
    			if(birth_day > now_day){
    				year = now_year - birth_year - 1;
    			}else{
    				year = now_year - birth_year;
    			}
    		}else{
    			year = now_year - birth_year;
    		}
    	}
    	if(f){
    		if(year > 130){
    			cout << "Case #" << times++ <<": Check birth date\n";
    		}else{
    			cout << "Case #" << times++ << ": " <<year << "\n";
    		}
    	}else{
    		cout << "Case #" << times++ <<": Invalid birth date\n";
    		f = 1;
    	}
    }
    return 0;
}
