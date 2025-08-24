#include<bits/stdc++.h>
using namespace std;

void rev(int i, int arr[], int n){
    if(i >= 2) return;
    swap(arr[i], arr[n-i-1]);
    rev(i+1, arr, n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++) cin >> arr[i];
    rev(0, arr, n);
    for(int i =0; i<n; i++) cout << arr[i] << " ";
    return 0;
}

// void reverseArray(vector<int> &arr, int l, int r) {
//     if (l >= r) return;  // base case
//     swap(arr[l], arr[r]);
//     reverseArray(arr, l+1, r-1);  // recursive call
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     reverseArray(arr, 0, n-1);

//     for (int x : arr) cout << x << " ";
//     cout << endl;
// }