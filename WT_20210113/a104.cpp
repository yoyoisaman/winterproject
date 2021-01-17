#include<stdio.h>
void mysort(int*input, int cnt){
	for(int i = 0;i<cnt;i++){
		for(int j =0;j<cnt-1;j++){
			if(input[j]>input[j+1]){
				int tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp; 
			}
		}
	}
}
int main(){
	int cnt = 0;
	int input[1001];
	while((scanf("%d",&cnt))!=EOF){
		for(int i =0;i<cnt;i++){
			scanf("%d",&input[i]);
		}
		mysort(input,cnt);
		for(int i =0;i<cnt-1;i++){
			printf("%d ",input[i]);
		}
		printf("%d\n",input[cnt-1]);
	}
}
