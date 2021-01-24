#include<stdio.h>
#include<string.h>

int num[200] = {0};
int numcnt = 0;
void getnum(int k){
	for(int i=0;i<k;i++){
		scanf("%d",&num[i]);
		numcnt++;
	}
}

void rev(){
	for(int i=0;i<numcnt;i++){
		if(num[i]!=num[numcnt-1-i]){
			printf("keep defending\n");
			return;
		}
	}
	printf("go forward\n");
}

int main(){
	int cnt=0;
	scanf("%d",&cnt);
	for(int i=0;i<cnt;i++){
		int n=0,m=0;
		scanf("%d %d",&n,&m);
		getnum(n*m);
		rev();
		numcnt = 0;
		memset(num,0,sizeof(num));
	}
}
