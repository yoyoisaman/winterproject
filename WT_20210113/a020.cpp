#include<stdio.h>
#include<stdlib.h>

int main(){
	char input[11];
	fgets(input,11,stdin);
	input[10] = '\0';
	int sum = 0, tmp = 0;
	if(input[0] == 'A'){
		tmp+=10;
	}else if(input[0] == 'B'){
		tmp+=11;
	}else if(input[0] == 'C'){
		tmp+=12;
	}else if(input[0] == 'D'){
		tmp+=13;
	}else if(input[0] == 'E'){
		tmp+=14;
	}else if(input[0] == 'F'){
		tmp+=15;
	}else if(input[0] == 'G'){
		tmp+=16;
	}else if(input[0] == 'H'){
		tmp+=17;
	}else if(input[0] == 'I'){
		tmp+=34;
	}else if(input[0] == 'J'){
		tmp+=18;
	}else if(input[0] == 'K'){
		tmp+=19;
	}else if(input[0] == 'L'){
		tmp+=20;
	}else if(input[0] == 'M'){
		tmp+=21;
	}else if(input[0] == 'N'){
		tmp+=22;
	}else if(input[0] == 'O'){
		tmp+=35;
	}else if(input[0] == 'P'){
		tmp+=23;
	}else if(input[0] == 'Q'){
		tmp+=24;
	}else if(input[0] == 'R'){
		tmp+=25;
	}else if(input[0] == 'S'){
		tmp+=26;
	}else if(input[0] == 'T'){
		tmp+=27;
	}else if(input[0] == 'U'){
		tmp+=28;
	}else if(input[0] == 'V'){
		tmp+=29;
	}else if(input[0] == 'W'){
		tmp+=32;
	}else if(input[0] == 'X'){
		tmp+=30;
	}else if(input[0] == 'Y'){
		tmp+=31;
	}else if(input[0] == 'Z'){
		tmp+=33;
	}
	int ten = tmp/10;
	sum += ten + 9*((tmp - (ten*10)));
	for(int i =1;i<9;i++){
		sum += (input[i]-'0') * (9-i);
	}
	sum+=(input[9] - '0');
	if(sum%10 ==0){
		printf("real\n");
	}else{
		printf("fake\n");
	}
} 
