#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void count(int n){
    if(cnt == 1) return;
    cnt--;
    cout << cnt << endl;
    count(n);
}

int main(){
    int n;
    cin >> cnt;
    count(n);
}