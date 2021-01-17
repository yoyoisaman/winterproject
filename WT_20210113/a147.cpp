#include<stdio.h>

int main(){
	int input = 0;
	int first = 0;
	while(1==1){
		scanf("%d",&input);
		if(input == 0){
			break;
		}
		for(int i = 1;i<input;i++){
			if(i % 7 == 0){
				continue;
			}
			if(first == 0){
				first = 1;
			}else{
				printf(" ");
			}
			printf("%d",i);
		}
		printf("\n");
		first = 0;
	}
}
