#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	getline(cin, a);
	getline(cin, b);
	stringstream ss;
	ss << a;
	while (getline(ss, a, ' '))
		cout<<b<<", "<<a<<'\n';
	return 0;
}
