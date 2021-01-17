#include<stdio.h>

int main(){
	int input = 0;
	int sum = 0;
	scanf("%d",&input);
	if(input>=40){
		printf("100\n");
	}else if(input>20){
		printf("%d\n",80+(input-20));
	}else if(input>10){
		printf("%d\n",60+2*(input-10));
	}else if(input>0){
		printf("%d\n",input*6);
	}else if(input==0){
		printf("0\n");
	}
}
