#include <bits/stdc++.h>
using namespace std;
typedef struct num{
	long long s,t,num,lose;
}Num;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    cin >> n >> m;
    vector<Num> peo(n);
    for(int i = 0;i < n;i++){
    	peo[i].num = i + 1;
    	peo[i].lose = 0;
    	cin >> peo[i].s;
    }
    for(int i = 0;i < n;i++){
    	cin >> peo[i].t;
    }
    long long num;
    queue<Num> q;
    for(int i = 0;i < n;i++){
    	cin >> num;
    	q.emplace(peo[num - 1]);
    }
    while(q.size() != 1){
    	queue<Num> win,lose;
    	while(q.size() > 1){
    		Num p1 = q.front(),p2;
		    q.pop();
		    p2 = q.front();
		    q.pop();
		    long long a = p1.s,b = p1.t,c = p2.s,d = p2.t;
		    if((long long)(a * b) >= (long long)(c * d)){
		    	p1.s = a + ((c * d) / (2 * b));
		    	p1.t = b + ((c * d) / (2 * a));
		    	p2.s = c + (c / 2);
		    	p2.t = d + (d / 2);
		    	p2.lose++;
		    	win.emplace(p1);
		    	lose.emplace(p2);
		    }else{
		    	p1.s = a + (a / 2);
		    	p1.t = b + (b / 2);
		    	p2.s = c + ((a * b) / (2 * d));
		    	p2.t = d + ((a * b) / (2 * c));
		    	p1.lose++;
		    	win.emplace(p2);
		    	lose.emplace(p1);
		    }
    	}
    	Num cnt = {.s = 0,.t = 0,.num = -1,.lose = 0};
    	if(!q.empty()){
	    	cnt = q.front();
	    	q.pop();
	    }
    	while(!win.empty()){
    		q.emplace(win.front());
    		win.pop();
    	}
    	if(cnt.num != -1){
	    	q.emplace(cnt);
	    }
    	while(!lose.empty()){
    		if(lose.front().lose < m){
	    		q.emplace(lose.front());
	    	}
	    	lose.pop();
    	}
    }
    cout << q.front().num << "\n";
    return 0;
}
