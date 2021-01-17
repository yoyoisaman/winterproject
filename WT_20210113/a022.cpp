#include<stdio.h>
#include<string.h>

int main(){
	char input[1001];
	scanf("%s",input);
	int len=strlen(input);
	int find = 0;
	for(int i =0;i<len/2;i++){
		if(input[i] != input[len-1-i]){
			find = 1;
			break;
		}
	}
	if(find == 1){
		printf("no\n");
	}else if(find == 0){
		printf("yes\n");
	}
} 
