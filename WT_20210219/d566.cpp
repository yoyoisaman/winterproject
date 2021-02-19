#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
vector<pair<string, string>> v;
string name, s;
int accept = 0;
int k = 0, n = 0;

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> name >> s;
		v.push_back(make_pair(name, s));
	}
	while(!v.empty()) {
		pair<string, string> temp = v.back();
		v.pop_back();
		if(temp.second == "AC") {
			if(m[temp.first] != 2) {
				accept++;
				if(m[temp.first] == 0){
					k++;
				}
			}
			m[temp.first] = 2;
		}else {
			if(m[temp.first] != 2){
				m[temp.first] = 1;// 1 means he has failed;
			}
		}
	}
	cout << k * 100 / accept << "%\n";
}
