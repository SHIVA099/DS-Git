#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    while(n>0){
        int lastDigit = n%10;
        count = count+1;
        n = n/10;
    }
    cout << count;
}