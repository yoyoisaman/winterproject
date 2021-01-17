#include<stdio.h>
#include<string.h>

int main(){
	char input[20];
	int sum = 1;
	int cnt = 0;
	scanf("%d",&cnt);
	for(int j = 0;j<cnt;j++){
		scanf("%s",input);
		int len=strlen(input);
		for(int i = 0;i<len;i++){
			sum = sum*(input[i] - '0'); 
		}
		printf("%d\n",sum);
		sum = 1;	
	}
}
