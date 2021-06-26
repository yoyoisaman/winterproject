#include<stdio.h>
#include<math.h>

int main(){
	int cnt = 0;
	scanf("%d",&cnt);
	float t0 = 0;
	int time = 0;
	for(int i = 0;i<cnt;i++){
		scanf("%f,%d",&t0,&time);
		for(int j = 0;j<time;j++){
			t0 += (j+1)*2.71828;
		}
		t0 = t0 * 10000;
		t0 = floor(t0);
		t0 = t0 / 10000;
		printf("%.4f\n",t0);
		t0 = 0;
		time = 0;
		int j =0;
	}
}
