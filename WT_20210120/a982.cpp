#include <cstdio>
#include <queue>

using namespace std;

int n=0;
int map[101][101] = {0};
int dir[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};


struct v{
	int x,y;
};

void BFS(queue<v>q,int n){
	int xx=0, yy=0, done = 0;
	while(q.size() && !done){
			xx = q.front().x;yy = q.front().y;
			if(xx == n-2 && yy == n-2){
				done = 1;
				break;
			}
			for(int i=0;i<4;i++){
				if(map[xx+dir[i][0]][yy+dir[i][1]] == 0){
					//printf("push:%d %d\n",xx+dir[i][0],yy+dir[i][1]);
					q.push({xx+dir[i][0],yy+dir[i][1]});
					map[xx+dir[i][0]][yy+dir[i][1]] = map[xx][yy] + 1;
				}
			}
			//printf("pop:%d %d\n",q.front().x,q.front().y);
			q.pop();
		}
		if(done){
			printf("%d\n",map[n-2][n-2]);
		}else{
			printf("No solution!\n");
		}
}

int main(){
	while((scanf("%d",&n))!=EOF){	
		char tmp[101];
		for(int i=0;i<n;i++){
			scanf("%s",tmp);
			for(int j=0;j<n;j++){
				if(tmp[j] == '#'){
					map[i][j] = -1;//-1 cant go;
				}else{
					map[i][j] = 0;
				}
			}
		}
		queue<v>q;
		q.push({1,1});
		map[1][1] = 1;
		BFS(q,n); 
	}	
}
