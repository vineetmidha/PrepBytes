/*
Marathon Feb-21

Q.1 Cross that bridge

Priya knows about a bridge of length N, some parts of it are colored in 'X' color and some in 'Y' color. 
She can only cross the bridge if it is only colored in 'X' or 'Y'. 
In one step she can change any segment of consecutive same colors. 
After changing the color of a segment, the color 'X' becomes 'Y' and vice-versa.

What is the minimum number of steps to color the bridge in one color?

Input Format
The first line contains an integer T denoting the number of test cases.
The first line of each test case contains a string S of N characters, 
consisting of either 'X' or 'Y' colors denoting the current state of the bridge.

Output Format
For each test case output the minimum number of steps to color the bridge in one color.
Constraints
1≤T≤10
1≤N≤10^5

Time limit
1 second

Example
Input
1
XXYYXXX

Output
1

Sample test case Explanation
In one step we can color all the 'Y' colored segment into 'X'
*/

#include <bits/stdc++.h>
using namespace std;

int solve(string s){
  if (s.size()==1) return 0;
  
  int x = 0;
  int y = 0;
  
  // 0 denotes count of sequenes of X and 1 denotes count of sequenes of Y
  int sequences[2]={0,0}; 
  
  for (int i=1; i<s.size(); i++){
    if (s[i] != s[i-1]){
      int seq = (s[i-1] == 'X' ? 0 : 1);
      sequences[seq]++;
    }
  }
  
  int seq = (s[s.size()-1] == 'X' ? 0 : 1);
  sequences[seq]++;
  
  return min(sequences[0], sequences[1]);
}

int main()
{
  //write your code here
  int t;
  cin >> t;
  
  while (t--){
    string s;
    cin >> s;
    
    cout << solve(s) << endl;
    
  }
  return 0;
}
