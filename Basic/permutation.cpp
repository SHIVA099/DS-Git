#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
//    int maxi = *max_element(s, s+n);
}