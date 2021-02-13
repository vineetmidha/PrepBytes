
// https://mycode.prepbytes.com/contest/MARATHONFEB21/problems/FBEAST

/*
Marathon Feb 21

Q.2: Flying Beast

Flying Beast a famous Indian YouTuber, recently took courses of Data Structures and Algorithms on Prepbytes. 
While practicing, he got stuck in a problem. Since he is new to coding, help him solve the problem.

Given an array 
A of size N, which consists of elements 1,2,...N. Find the Sum(A).

Sum(A) = ∑max(S)−min(S), where S is a subarray of A, max(S) is the maximum value of S and 
min(S) is the minimum value of S.

Input Format
The first line contains an integer 
T denoting the number of test cases.
The first line of each test case contains a single integer N.

Output Format
For each test case, print a single integer representing the answer of that test case.

Constraints
1≤T≤10

1≤N≤10^5

Time limit
1 second

Example
Input
2
5
100

Output
20
166650

Sample test case Explanation
Example case 1: 
A=[1,2,3,4,5] then its subarrays are:-
[1],[2],[3],[4],[5],[1,2],[2,3],[3,4],[4,5],[1,2,3],[2,3,4],[3,4,5],[1,2,3,4],[2,3,4,5],[1,2,3,4,5].

The sum of difference of max(S)−min(S)=20.
*/

// Pass the sample test cases but gave WA on submission

#include <bits/stdc++.h>
using namespace std;

int solve(n){
    int sum=0;
    
    for (int i=1; i<=n; i++){
      sum += (i * (n-i));
    }
    
    return sum;  
}

int main()
{
  int t;
  cin >> t;
  
  while (t--){
    int n;
    cin >> n;

    cout << solve(n) << endl;
  }
  
  return 0;
}
