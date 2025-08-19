#include<bits/stdc++.h>
using namespace std;
void revNum(int i, int n){
    if(i<1) return;
    cout << i << endl;
    revNum(i-1, n);
}

int main(){
    int n;
    cin >> n;
    revNum(n, n);
}

// ------------------------------------ METHOD 2 --------------------------------

// int cnt = 0;
// void count(int n){
//     if(cnt == 1) return;
//     cnt--;
//     cout << cnt << endl;
//     count(n);
// }

// int main(){
//     int n;
//     cin >> cnt;
//     count(n);
// }