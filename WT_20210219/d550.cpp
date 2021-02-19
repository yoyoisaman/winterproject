#include <bits/stdc++.h>
using namespace std;

int main(){
	vector< vector <int> > v2;
	vector <int> v1;
	int n=0,m=0,k=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&k);
			v1.push_back(k);
		}
		v2.push_back(v1);
		v1.clear();
	}
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",v2[i][j]);
		}
		printf("\n");
	}
}
