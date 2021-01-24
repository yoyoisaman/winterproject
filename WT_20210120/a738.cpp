#include<stdio.h>

void swap(long long int *input1,long long int *input2){
	long long int tmp = *input1;
	*input1 = *input2;
	*input2 = tmp;
}
long long int gcd(long long int input1,long long int input2){
	long long int tmp = 0;
	while(input2!=0){
		tmp = input1 % input2;
		input1 = input2;
		input2 = tmp;
	}
	return input1;
}

int main(){
	long long int input1 = 0, input2 = 0;
	long long int result=0;
	while((scanf("%lld %lld",&input1,&input2))!=EOF){
		if(input2>input1){
			swap(&input1,&input2);
		}
		result = gcd(input1,input2);
		printf("%d\n",result);	
	}
}
