#include<bits/stdc++.h>
using namespace std;

void num(int i, int n){
    if(i>n) return;
    cout << i << endl;
    num(i+1, n);  
}

int main(){
    int n;
    cin >> n;
    num(1, n);
}

// ------------------------------------ METHOD 2 --------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int cnt = 0;
// void count(int n){
//     if(cnt == n) return;
//     cnt++;
//     cout << cnt << endl;
//     count(n);
// }

// int main(){
//     int n;
//     cin >> n;
//     count(n);
// }