#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>a,pair<int,int>b){
	if(a.first == b.first){
		return a.second<b.second;
	}
	return a.first<b.first;
}

int main(){
	vector<pair<int,int> >A;
	int cnt = 0;
	int x = 0, y = 0;
	scanf("%d",&cnt);
	for(int i =0;i<cnt;i++){
		scanf("%d %d",&x,&y);
		A.push_back(make_pair(x,y));
	}
	sort(A.begin(),A.end(),comp);
	for(int i =0;i<cnt;i++){
		printf("%d %d\n",A[i].first,A[i].second);
	}
}
