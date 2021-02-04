#include<bits/stdc++.h>
using namespace std;

int main(){
	deque<char>dq;
	char a;
	while(scanf("%c",&a)!=EOF){
		if(a == '\n') break;
		dq.push_back(a);
	}
	for(int i=0;i<dq.size();i++)
	printf("%c",dq[i]);
	printf("\n");
	for(int j=0;j<dq.size()-1;j++){
		a = dq[0];
		dq.pop_front();
		dq.push_back(a);
		for(int i=0;i<dq.size();i++)
			printf("%c",dq[i]);
			printf("\n");
	}
}
