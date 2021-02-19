#include <bits/stdc++.h>
using namespace std;

void sol(string s){
    while(s.size()){
    	cout << s << '\n';
    	s.pop_back();
	}
	return;
}
int main(){
	string s;
	cin >> s;
	sol(s);
}
