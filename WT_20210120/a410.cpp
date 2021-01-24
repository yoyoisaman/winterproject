#include<stdio.h>


void judge(int d, int dx, int dy){
 	if(d ==0 &&(dx!=0||dy!=0)){
 		printf("No answer\n");	
	}else if(d ==0 && dx==0 && dy==0){
		printf("Too many\n");
	}else if(d!=0){
		float x = (float)dx/d;
		float y = (float)dy/d;
		printf("x=%.2f\ny=%.2f\n",x,y);
	}
	return;
} 
int main(){
	int a=0, b=0, c=0, d=0, e=0, f=0;
	int dd=0, dx=0, dy=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	dd = (a*e) - (d*b);
	dx = (c*e) - (b*f);
	dy = (a*f) - (c*d);
	judge(dd,dx,dy);
}
