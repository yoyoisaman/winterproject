#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int main(){
	int cnt = 0;
	while(cin >> cnt){
		int k = 0;
		for(int i=0;i<cnt;i++){
			cin >> k;
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<cnt;i++){
			cout << v[i] << ' ';
		}
		cout << '\n';
		v.clear();
	}
}
