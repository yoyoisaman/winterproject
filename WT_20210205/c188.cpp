#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int cnt[201];
	for(int i=0;i<201;i++){
		cnt[i] = 0;
	}
	cnt[0] = 1;
	for(int i=1;i<=200;i++){
		for(int j=i;j<=200;j++){
			cnt[j] += cnt[j-i];
		}
 	}
	int n=0;
	while(cin >> n){
		cout << cnt[n] << '\n';
	}
}
