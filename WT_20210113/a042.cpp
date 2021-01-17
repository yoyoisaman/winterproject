#include<stdio.h>

int main(){
	int input = 0;
	while((scanf("%d",&input))!=EOF){
		if(input == 0){
			printf("1\n");
			continue;
		}
		if(input == 1){
			printf("2\n");
			continue;
		}
		printf("%d\n",(input*input)-input+2);
	}
}
