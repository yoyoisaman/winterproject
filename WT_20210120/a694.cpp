#include<stdio.h>

int main(){
	int food[501][501] = {0};
	int v[4] = {0};
	int sum = 0;
	int n = 0, m =0;
	while((scanf("%d %d",&n,&m))!=EOF){
		for(int i =0;i<n;i++){
			for(int j =0;j<n;j++){
				scanf("%d",&food[i][j]);
			}
		}
		for(int i=0;i<m;i++){
			sum = 0;
			for(int j=0;j<4;j++){
				scanf("%d",&v[j]);
			}
			for(int j=v[0]-1;j<v[2];j++){
				for(int q=v[1]-1;q<v[3];q++){
					sum+=food[j][q];
				}
			}
			printf("%d\n",sum);
		}	
	}
}
