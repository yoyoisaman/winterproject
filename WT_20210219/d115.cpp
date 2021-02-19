#include <bits/stdc++.h>
using namespace std;

int reco[100],arr[100];

void rec(int n , int m , int curr,int step){
    if(step == m){
        for(int i=0;i<m;i++){
		cout << reco[i] << " ";
	}
        cout << '\n';
        return;
    }
    for(int i=curr;i<n;i++){
        reco[step]=arr[i];
        rec(n,m,i+1,step+1);
    }
}

int main(){
    int n=0;
    while(cin >> n ){
        if(n==0){
        	break;
	}
        int m=0;
        for(int i=0;i<n;i++){
        	cin >> arr[i];
	}
        cin >> m;
        sort(arr,arr+n);
        rec(n,m,0,0);
    }
}

