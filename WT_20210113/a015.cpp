#include<stdio.h>

int main(){
	int n = 0, m = 0;
	int A[100][100] , AT[100][100];
	while((scanf("%d %d",&m,&n))!=EOF){
		for(int i = 0;i<m;i++){
			for(int k =0;k<n;k++){
				scanf("%d",&A[i][k]);
			}
		} 
		for(int i = 0;i<m;i++){
			for(int k =0;k<n;k++){
				AT[k][i] = A[i][k];
			}
		} 
		for(int i = 0;i<n;i++){
			for(int k =0;k<m;k++){
				printf("%d",AT[i][k]);
                if(k<m-1){
                    printf(" ");
                }
			}
			printf("\n");
		}
	}
} 
