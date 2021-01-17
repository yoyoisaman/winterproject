#include<stdio.h>

int main(){
	long long int input1 = 0, input2 = 0;
	scanf("%lld %lld",&input1,&input2);
	long long int tmp = 0;
	if(input2>input1){
		tmp = input2;
		input2 = input1;
		input1 = tmp;
		tmp = 0;
	}
	while(input2!=0){
		tmp = input1 % input2;
		input1 = input2;
		input2 = tmp;
	}
	printf("%d\n",input1);
}
