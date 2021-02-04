#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n=0;
	while(cin>>n){
		long long int k = (long long int)(log(n)/log(2)) + 1;
		cout << k << '\n';
	}
}
