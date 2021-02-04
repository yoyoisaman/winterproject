#include<bits/stdc++.h>

using namespace std;

int main(){
	int cnt = 0;
	deque<char>qe;
	cin >> cnt;
	for(int i=0;i<cnt-1;i++){
		qe.push_back('_');
	}
	for(int i=0;i<cnt;i++){
		qe.push_back('*');
		for(auto x:qe){
			cout << x;
		}
		qe.pop_front();
		cout << '\n';
	}
}
