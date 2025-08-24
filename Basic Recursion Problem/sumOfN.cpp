#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n);
}
// void count(int i, int sum){
//     if(i<1){
//         cout << sum;
//         return;
//     }
//     count(i-1, sum+i);
// }

// int main(){
//     int  i;
//     cin >> i;
//     count(i, 0);

// }