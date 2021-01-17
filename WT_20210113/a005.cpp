#include<stdio.h>

int main(){
	int cnt = 0;
	int input[5] = {0} ;
	scanf("%d",&cnt);
	for(int i = 0;i<cnt;i++){
		for(int j = 0;j<4;j++){
			scanf("%d",&input[j]);
		}
		if(input[1] - input[0] == input[2] - input[1]){
			input[4] = input[3] + (input[1] - input[0]);
		}
		else if(input[1] / input[0] == input[2] / input[1]){
			input[4] = input[3] * input[1] / input[0];
		}
			printf("%d %d %d %d %d\n",input[0],input[1],input[2],input[3],input[4]);
	}
}
