#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss;
		int sum = 0, a = 0;
		ss << s;
		while(ss >> a){
			sum += a;
		}
		cout << sum << '\n';
	}
}
