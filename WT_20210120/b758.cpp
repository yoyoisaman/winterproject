#include<stdio.h>

void awk(int h,int m){
	if(m>=30){
		h+=3;
		m-=30;
	}
	else if(m<30){
		h+=2;
		m+=30;
	}
	if(h>=24) h-=24;
	printf("%02d:%02d\n",h,m);
}

int main(){
	int h =0,m=0;
	scanf("%d %d",&h,&m);
	awk(h,m);
}
