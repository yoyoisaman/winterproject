#include<iostream>
#include<string>
#include<vector>
using namespace std;

string input;
int r=0,l=0;

void dfs(int n){
	if(l<r) return;
	if(input.size() == n*2){
		if(r == l){
			cout << input <<'\n';
		}
	}
	else{
		input.push_back('(');
		l++;
		dfs(n);
		l--;
		input.pop_back();
		input.push_back(')');
		r++;
		dfs(n);
		r--;
		input.pop_back();	
	}
}

int main(){
	int n =0;
	while(cin>>n){
		dfs(n);
	}
}
