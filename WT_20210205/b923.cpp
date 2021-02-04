#include<bits/stdc++.h>
using namespace std;

stack<int>st;

void stcon(int t){
	switch(t){
		case(1):
			st.pop();
		break;
		case(2):
			cout << st.top() <<'\n';
		break;
		case(3):
			int i=0;
			cin >> i;
			st.push(i);
		break;
	}
	return;
}

int main(){
	int n=0;
	while(cin>>n){
		for(int i=0;i<n;i++){
			int t=0;
			cin>>t;
			stcon(t);
		}
	}
}
