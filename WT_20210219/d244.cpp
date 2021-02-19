#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,int>mp;
	int k = 0;
	while(cin >> k){
		mp[k]++;
	}
	for(auto it:mp){
		if((it.second % 3)){
			cout << it.first << '\n';
			break;
		}
	}
}
