#include<iostream>
#include<set>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int cnt = 0;
	vector<int>A;
	while(cin>>cnt){
		for(int i =cnt-1;i>=0;i--){
			A.push_back(i+1);
		}
		do{
			for(int i = 0;i<cnt;i++){
				cout << A[i];
			}
			cout << '\n';
		}while(prev_permutation(A.begin(), A.end()));
		A.clear();
	}
}
