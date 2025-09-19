// Problem statement
// Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.



// For example:
// Input:
// 'a' = [1, 2, 4, 5], 'n' = 5

// Output :
// 3

// Explanation: 3 is the missing value in the range 1 to 5.

// FIRST APPROACH (BRUTE FORCE APPROACH)

// int missingNumber(vector<int>&a, int N) {
//     // Write your code here
//     for(int i = 1; i<=N; i++) {
//         int flag = 0;
//         for(int j = 0; j<N-1; j++) {
//             if(a[j] == i){
//             flag = 1;
//             break;
//             }
//         }
//         if(flag == 0) return i;
//     }
// }

// ------------------------------------------------------------------------------

// SECOND APPROACH (BETTER APPROACH) USING HASH FUNCTION 

// int missingNumber(vector<int>&a, int N) {
//     int hash[N+1] = {0};

//     for(int i = 0; i < N-1; i++) {
//         hash[a[i]] = 1; 
//     }
//     for(int i = 1; i <= N; i++) {
//         if(hash[i] == 0) {
//             return i;
//         }
//     }
// }



// LEETCODE
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> hash(n + 1, 0);

//         for (int i = 0; i < n; i++) {
//             hash[nums[i]] = 1;
//         }

//         // Find the missing number
//         for (int i = 0; i <= n; i++) {
//             if (hash[i] == 0) return i;
//         }

//         return -1;
//     }
// };


// ------------------------------------------------------------------------

// OPTIMIZED SOLUTION

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int sum = n*(n+1)/2;
//         int s2 = 0;

//         for(int i = 0; i < n; i++) {
//             s2 = s2 + nums[i];
//         }
//         return (sum - s2);
//     }
// };