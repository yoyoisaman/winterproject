#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n=0,m=0;
	while(cin>>n>>m){
		long long int k = 1;
		while(1==1){
			n-=k;
			if(n<=0) break;
			k+=m;
			if(m==0){
				n=0;
				break;
			}
		}
		if(n==0){
			cout << "Go Kevin!!" << '\n';
		}else{
			cout << "No Stop!!" << '\n';
		}
	}
}
