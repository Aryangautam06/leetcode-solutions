// ======================================
// LeetCode Problem: count primes
// Language: cpp
// Link: https://leetcode.com/problems/count-primes/
// Synced by: LinkCode
// Date: 03/10/2026, 15:37:46
// ======================================


class Solution {
 public:
  int countPrimes(int n) {
    if(n <= 2) return 0;

        vector<char> prime(n, 1);

        // remove even numbers except 2
        for(int i = 4; i < n; i += 2) {
            prime[i] = 0;
        }

        // only process odd numbers
        for(int i = 3; 1LL * i * i < n; i += 2) {
            if(prime[i]) {
                for(long long j = 1LL * i * i; j < n; j += 2LL * i) {
                    prime[j] = 0;
                }
            }
        }

        int count = 1;   // 2 is prime

        for(int i = 3; i < n; i += 2) {
            if(prime[i]) {
                count++;
            }
        }

        return count;
  }
};