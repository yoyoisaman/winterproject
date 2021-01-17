#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char input[10];
	while((fgets(input,10,stdin))!=NULL){
		char result[10];
		for(int i =0;i<6;i++){
			int first = 0, second = 0;
			if(input[i] - input[i+1] < 0){
				first = input[i+1];
				second = input[i];
			}else{
				first = input[i];
				second = input[i+1];
			}
			result[i] = (first - second + '0');
		}
		result[6] = '\0';
		printf("%s\n",result);
	}
}
