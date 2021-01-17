#include<stdio.h>
#include<stdlib.h>

int main(){
	char input[11];
	int sum = 0;
	int check = 0;
	fgets(input,11,stdin);
	input[10] = '\0';
	for(int i =0;i<8;i++){
		sum += ((input[i]-'0') * (8-i));
	}
	sum += (input[8]-'0');//(英文+數字九碼)%10 == 0; 
	check = 10 - (sum%10); //10要= 0
	check = check%10;
	if(check == 0){
		printf("BNZ\n");
	}else if(check == 1){
		printf("AMW\n");
	}else if(check == 2){
		printf("KLY\n");
	}else if(check == 3){
		printf("JVX\n");
	}else if(check == 4){
		printf("HU\n");
	}else if(check == 5){
		printf("GT\n");
	}else if(check == 6){
		printf("FS\n");
	}else if(check == 7){
		printf("ER\n");
	}else if(check == 8){
		printf("DOQ\n");
	}else if(check == 9){
		printf("CIP\n");
	}
} 
