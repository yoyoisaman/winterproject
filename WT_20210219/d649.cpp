#include <bits/stdc++.h>
using namespace std;

deque<char>dq;

void sol(int n){
	for(int i=0;i<n-1;i++)
	dq.push_back('_');
	dq.push_back('+');	
	while(n){
		n--;
		for(auto x:dq){
			cout << x;
		}
		cout << '\n';
		dq.pop_front();
		dq.push_back('+');
	}
	return;
}

int main(){
	int n = 0;
	while(cin >> n){
		if(n == 0) break;
		sol(n);	
		dq.clear();	
	}
}
