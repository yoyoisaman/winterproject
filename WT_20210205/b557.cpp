#include<bits/stdc++.h>
using namespace std;

int stick[101];
vector<int>usedList;
int ans = 0;

void Rd(int sc){
	int k=0;
	for(int i=0;i<sc;i++){
		scanf("%d",&k);
		stick[k]++;
	}
	return;
}

void vcRd(){
	for(int i=1;i<101;i++){
		if(stick[i]>0){
			usedList.push_back(i);
		}
	}
	return;
}

bool isAns(int i,int j,int l){
	if(i*i + j*j == l*l){
		return true;
	}
	return false;
}

void judge(int s_size){
	int bot=0,mid=0,top=0;
	for(int i=0;i<s_size-2;i++){
		for(int j=i+1;j<s_size-1;j++){
			for(int l=j+1;l<s_size;l++){
				bot = usedList[i];mid = usedList[j];top = usedList[l];
				if(isAns(bot,mid,top) == true){
					ans += (stick[bot] * stick[mid] * stick[top]);
				}
			}
		}
	}
}

int main(){
	int cnt=0;
	scanf("%d",&cnt);
	for(int i=0;i<cnt;i++){
		int sc = 0;
		memset(stick,0,sizeof(stick));
		usedList.clear();
		scanf("%d",&sc);
		Rd(sc);
		vcRd();
		int s_size = usedList.size();
		judge(s_size);
		printf("%d\n",ans);
		ans = 0;
	}
}
