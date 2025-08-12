#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n;
    int revDig = 0;

    while(n>0){
        int lastDigit = n%10;
        revDig = (revDig*10)+lastDigit;
        n = n/10;
    }
    if(temp == revDig) cout << "true";
    else cout << "false";

    return 0;
}