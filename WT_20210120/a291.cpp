#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int A = 0, B =0;
int done[4] = {0}; 
int done2[4] = {0};

void check(int*r,int*guess){
	for(int i = 0;i<4;i++){
		if(r[i] == guess[i]){
			A++;
			done[i] = 1;
			done2[i] = 1;
		}
	}
	for(int i = 0;i<4;i++){
		if(done2[i]==1) continue;
		for(int j =0;j<4;j++){
			if(done[j]==1) continue;
			if(r[i] == guess[j]){
				B++;
				done[j] = 1;
				break;
			} 
		}
	}
}

int main(){
	int right[4];
	int guess[4];
	while((scanf("%d %d %d %d",&right[0],&right[1],&right[2],&right[3]))!=EOF){
		int cnt = 0;
		scanf("%d",&cnt);
		for(int i=0;i<cnt;i++){
			scanf("%d %d %d %d",&guess[0],&guess[1],&guess[2],&guess[3]);
			check(right,guess);
			printf("%dA%dB\n",A,B);
			A=0;B=0;
			memset(done,0,4*sizeof(int));
			memset(done2,0,4*sizeof(int));
		}
	}
}
