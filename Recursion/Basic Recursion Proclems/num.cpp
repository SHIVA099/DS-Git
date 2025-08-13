#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void count(int n){
    if(cnt == n) return;
    cnt++;
    cout << cnt << endl;
    count(n);
}

int main(){
    int n;
    cin >> n;
    count(n);
}