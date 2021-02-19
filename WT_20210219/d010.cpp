#include<bits/stdc++.h>
using namespace std;

void sol(int a){
	int sum = 0;
	for(int i = 1;i<a;i++){
		if((a%i) == 0){
			sum += i;
			//cout << i << '\n';
		} 
	}
	if(sum < a) cout << "虧數\n";
	if(sum == a) cout << "完全數\n";
	if(sum > a) cout << "盈數\n";
}

int main(){
	int a = 0;
	while(cin >> a){
		sol(a);
	}
}
