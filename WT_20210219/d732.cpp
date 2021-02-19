#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int > v;
	int cnt = 0, q = 0;
	cin >> cnt >> q;
	for(int i=0;i<cnt;i++){
		int k =0;
		cin >> k;
		v.push_back(k);
	}
	for(int i=0;i<q;i++){
		int k =0;
		cin >> k;
		auto it = lower_bound(v.begin(), v.end(), k);
		if(*it != k){
			cout << "0\n";
		}else{
			cout << it - v.begin() + 1 << '\n';
		}
	}
}
