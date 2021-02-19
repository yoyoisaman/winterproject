#include <bits/stdc++.h>
using namespace std;

void sol(int n){
	vector<int>v;
	int tmp = 0 , max=0 , min=0;
	for(int i=0;i<n;i++){
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	cout << v[0];
	for(int i = 1;i<v.size();i++){
		cout << ' ' << v[i];
	}
	cout << '\n';
	auto it = lower_bound(v.begin(),v.end(),60);
	if(it == v.end()){
		it--;
		cout << *(it--) << '\n';
		cout << "worst case\n";
	}else if(it == v.begin()){
		cout << "best case\n";
		cout << *it << '\n';
	}else{
		it--;
		cout << *(it) << '\n';
		it++;
		cout << *(it) << '\n';
	}
	return;
}


int main(){
	int n = 0;
	while(cin >> n){
		sol(n);
	}
}
