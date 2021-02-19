#include <bits/stdc++.h>
using namespace std;

int main(){
	string enter;
	int st1=0,st2=0;
	while(cin>>enter){
		if(enter=="push"){
			long long int a;
			cin>>a;
			st1++;
			cout<<1;
		}
		else{
			if(st2){
				cout<<4;
				st2--;
			}
			else{
				for(int i=0;i<st1;i++){
					cout<<5;
				}
				st2+=st1;
				if(st2){
					cout<<4;
					st2--;
				}
				st1=0;
			}
		}
	}
	cout << '\n';
}
