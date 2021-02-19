#include <bits/stdc++.h>
using namespace std;

void sol(int a,int b){
	a += (a%2);
	b -= (b%2);
	cout << (b-a)/2+1 << '\n';
}
int main(){
	int a=0,b=0;
	cin>> a >> b;
	sol(a,b);
}
