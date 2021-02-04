#include<bits/stdc++.h>

using namespace std;

int main(){
	int cnt = 0;
	string s = "*";
	cin >> cnt;
	for(int i=0;i<cnt;i++){
		cout << s << '\n';
		s.insert(s.begin()+i,'*');
	}
}
