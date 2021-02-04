#include<bits/stdc++.h>

using namespace std;

bool comp(string a,string b){
	return stoi(a) < stoi(b);
}


int main(){
	int cnt=0;
	string s;
	cin >> cnt;
	vector<string>v;
	for(int i=0;i<cnt;i++){
		cin >> s;
		v.push_back(s);
	}
	for(int i=0;i<cnt;i++){
		reverse(v[i].begin(),v[i].end());
	}
	sort(v.begin(),v.end(),comp);
	cout << v.back() << '\n';
}

