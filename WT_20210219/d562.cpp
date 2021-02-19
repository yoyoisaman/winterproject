#include <bits/stdc++.h>
using namespace std;

deque<int>dq;
stack<int>st;

void out(int curNum){
	for(int i = 0;i < curNum;i++){
		cout << dq[i] << ' ';
	}
	cout << '\n';
}
void re(){
	int k = 0;
	while(dq.size()){
		k = dq.front();
		dq.pop_front();
		st.push(k);
	}
	while(st.size()){
		k = st.top();
		dq.push_back(k);
		st.pop();
	}
	return;
}

void sol(int num){
	for(int i=0;i<num;i++){
		out(num-i);
		dq.pop_front();
		re();
	}
	dq.clear();
	return;
}

int main(){
	int num = 0;
	while(cin >> num){
		int k = 0;
		for(int i = 0;i<num;i++){
			cin >> k;
			dq.push_back(k);
		}
		sol(num);
	}
}
