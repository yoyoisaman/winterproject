#include<stdio.h>

int main(){
	int input = 0;
	while((scanf("%d",&input))!=EOF){
		input = (input*input*input+5*input+6)/6; 
		printf("%d\n",input);
	}
}
