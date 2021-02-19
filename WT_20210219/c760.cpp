#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin >> s){
        s[0]=s[0]-'a'+'A';
        cout << s << '\n';
    }
}
