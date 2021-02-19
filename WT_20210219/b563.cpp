#include <iostream>
#include <map>
using namespace std;
 
int main() {
	map <int, map<int,int> > mp;
	int n;
	int a, b;
	while (cin >> n){
		int ans = 0;
		for (int i = 0; i < n; i++){
			cin >> a >> b;
			if (mp[b][a]>0){
				mp[b][a] -= 1;
				mp[a][b] -= 1;
				ans += 1;
			}else{
				mp[a][b] += 1;   
 			}
		}
        cout << ans << '\n';
	}
}

