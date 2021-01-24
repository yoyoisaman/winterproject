#include<iostream>

using namespace std;

int main(){
	int a, b, n, tmp = 0;
	while(cin>>a>>b>>n){
		tmp = a/b;
		a = (a%b)*10;
		cout<<tmp<<'.';
		for(int i = 0;i<n;i++){
			tmp = a/b;
			a = (a%b)*10;
			cout<<tmp;
		}
		cout << '\n';
	}
}
