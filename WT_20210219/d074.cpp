#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> v;
	int n = 0, k = 0;
	cin >> n;
	while(n--){
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	cout << v.back() << '\n';
}
