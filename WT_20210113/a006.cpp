#include<stdio.h>
#include<math.h>

int main(){
	int a = 0, b = 0, c = 0;
	int x1 = 0, x2 = 0;
	scanf("%d %d %d",&a,&b,&c);
	int D = (b*b)- 4*(a*c);
	
	if(D < 0){
		printf("No real root\n");
	}else if(D == 0){
		x1 = (-1 * b)/(2 * a);
		printf("Two same roots x=%d\n",x1);
	}else if(D>0){
		x1 = (-1 * b+sqrt(D))/2 * a;
		x2 = (-1 * b-sqrt(D))/2 * a;
		if(x2 > x1){
			int tmp = x1;
			x1 = x2;
			x2 = tmp;
		}
		printf("Two different roots x1=%d , x2=%d\n",x1,x2);
	}
}
