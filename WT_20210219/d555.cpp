#include <bits/stdc++.h>
using namespace std;

struct pos{
	int x;int y;
};

pos v[5000001];

bool comp(pos a,pos b){
	return a.x>b.x || (a.x==b.x)&&(a.y>b.y);
}


void sol(int n,int k){
	stack<pos>st;
	int my=v[0].y;
	st.push(v[0]);
	for(int i = 1;i<n;i++){
		if(v[i].y > my){
			st.push(v[i]);
			my = v[i].y;
		}
	}
	cout << "Case " << k << ":" << '\n' << "Dominate Point: " << st.size() << '\n';
	while(st.size()){
        	cout << "("<< st.top().x << "," <<  st.top().y << ")" << '\n';
       		st.pop();
    	}
}

int main(){
	int n=0,k=0;
	while(cin >> n){
		k++;
		for(int i=0;i<n;i++){
			cin >> v[i].x >> v[i].y;
		}
		sort(v,v+n,comp);
		sol(n,k);		
	}
}
