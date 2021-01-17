#include<stdio.h>

int main(){
	int a =0;
	long long int b = 0, c = 0;
	int cnt = 0;
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d %lld %lld",&a,&b,&c);
		switch(a){
			case 1:
				printf("%lld\n",b+c);
				break;
			case 2:
				printf("%lld\n",b-c);
				break;
			case 3:
				printf("%lld\n",b*c);
				break;
			case 4:
				printf("%lld\n",b/c);
				break;
		}
	}
}
