#include<stdio.h>

void swap(int*a,int*b){
	int tmp = *a;
	*a = *b;
	*b = tmp;	
}


void mysort(int*store,int cnt){
	int cnt1=0;
	for(int i=0;i<cnt;i++){
		for(int j=0;j<cnt-1;j++){
			if(store[j]>store[j+1]){
				cnt1++;
				swap(&store[j],&store[j+1]);
			}
		}
	}
	printf("%d\n",cnt1);
}

int main(){
	int cnt=0;
	int store[10001] = {0};
	scanf("%d",&cnt);
	for(int i=0;i<cnt;i++){
		scanf("%d",&store[i]);
	}
	mysort(store,cnt);
}
