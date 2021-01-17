#include<stdio.h>
#include<math.h>

int main(){
	int square[1002] = {0};
	for(int i = 1;i<1002;i++){
		int result = sqrt(i);
        if(( result *  result) == i){
			square[i] = 1;
		} 
	}
	
	int cnt = 0;
	int m = 0, n = 0;
	int sum = 0;
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d %d",&m,&n);
		for(int j =m;j<=n;j++){
			if(square[j]){
				sum+=j;
				//printf("%d\n",j);
			}
		}
		printf("Case %d: %d\n",i+1,sum);
		sum = 0;
	}
}
