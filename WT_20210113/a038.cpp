#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char input[64];
	scanf("%s",input);
	int len = strlen(input);
	for(int i =0;i<len/2;i++){
		char tmp = input[i];
		input[i] = input[len-1-i];
		input[len-1-i] = tmp;
	}
	printf("%d\n",atoi(input));
}
