#include<bits/stdc++.h>

using namespace std;

void calcu(int num1,char oper,int num2){
	switch(oper){
		case'+':
			cout << num1 + num2 << '\n';
			break;
		case'-':
			cout << num1 - num2 << '\n';
			break;
		case'*':
			cout << num1 * num2 << '\n';
			break;
		case'/':
			cout << num1 / num2 << '\n';
			break;
	}
	return;
}

int main(){
	int num1=0,num2=0;
	char oper;
	while(cin >>num1>>oper>>num2){
		calcu(num1,oper,num2);
	}
}
