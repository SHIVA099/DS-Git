#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"Raj"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}
// ------------------------------------ METHOD 2 --------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int cnt = 0;
// void name(string a){
//     if(cnt == 5) return;   // base case
//     cnt++;
//     cout << a << endl;
//     name(a);
// }

// int main(){
//     string a;
//     cin  >> a;
//     name(a);
// }

