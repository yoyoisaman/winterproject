#include <bits/stdc++.h>
using namespace std;

void sol(){
	vector<int>v;
	int tmp = 0, sum = 0, num = 0;
	cin >> num;
	while(num--){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	tmp = v[v.size()/2];
	for(auto x:v){
		sum += abs(tmp - x);
	}
	cout << sum << '\n';
	return;
}


int main(){
	int n = 0;
	cin >> n;
	while(n--){
		sol();
	}
} 
