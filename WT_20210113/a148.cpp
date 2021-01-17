#include<stdio.h>

int main(){
	int cnt = 0;
	int input = 0, sum = 0;
	while((scanf("%d",&cnt))!=EOF){
		for(int i = 0;i<cnt;i++){
			scanf("%d",&input);
			sum+=input;
		}
		float result = (float)sum/cnt;
		if(result > 59){
			printf("no\n");
		}else{
			printf("yes\n");
		}
		sum = 0;
	}
}
