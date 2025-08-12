#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = 0;
    int sum;
    sum = 0;

    while(n>0){
        int lastDigit = n%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n = n/10;
    }
    return sum == temp;
}