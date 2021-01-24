#include <bits/stdc++.h>
using namespace std;
vector<int>vec;
int store[64] ={0};
int target = 0, f = 0, cnt = 0;

void DFS(int level,int sum){
	if(sum > target) return;
	if(level == cnt){
		if(sum !=target) return;
		for(int i = 0;i<vec.size()-1;i++){
			printf("%d ",vec[i]); 
		} 
		printf("%d\n",vec[vec.size()-1]);
		f = 1;
		return;
	}
	vec.push_back(store[level]);
	DFS(level+1,sum+store[level]);
	vec.pop_back();
	DFS(level+1,sum);
}


int main(){
	scanf("%d %d",&cnt,&target);
	for(int i =0;i<cnt;i++){
		scanf("%d",&store[i]);
	}
	sort(store,store+cnt);
	DFS(0,0);
	if(f == 0){
		printf("-1\n");
	}
}
