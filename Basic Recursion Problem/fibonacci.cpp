#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1) return n;
    int last = fib(n-1);
    int secondLast = fib(n-2);

    return last + secondLast;
}

int main (){
    int n;
    cin >> n;
    cout << fib(n);
}



// int fib(int n){
//     if(n==0) return 0;
//     if(n==1) return 1;

//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << fib(n);
// }