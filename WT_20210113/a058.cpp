#include<stdio.h>
#include<stdlib.h>

int main(){
	int k = 0, k1 = 0, k2 = 0;
	int input = 0, cnt = 0;
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d",&input);
		switch(input%3){
			case 0:
				k++;
				break;
			case 1:
				k1++;
				break;
			case 2:
				k2++;
				break;
		}
	}
	printf("%d %d %d\n",k,k1,k2);
}
