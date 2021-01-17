#include<stdio.h>

int main(){
	int input = 0;
	int cnt = 0;
	char bin[32] ;
	while((scanf("%d",&input))!=EOF){
		for(int i = 1;i<=input;i*=2){
			if(input & i){
				bin[cnt] = '1';
			}else{
				bin[cnt] = '0';
			}
			cnt++;
		}
		for(int i = cnt-1;i>=0;i--){
			printf("%c",bin[i]);
		}
		printf("\n");
		cnt = 0;
	}
}
