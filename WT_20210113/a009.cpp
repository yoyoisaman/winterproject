#include<stdio.h>

int main(){
	int c ;
	while((c = getchar())!=EOF){
		c = c - 7;
		printf("%c",c);
	}
}
