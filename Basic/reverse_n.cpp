#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reverseNum = 0;

    while(n>0){
        int lastDigit = n%10;
        reverseNum = (reverseNum*10) + lastDigit;
        n = n/10;
    }
    cout << reverseNum;
}