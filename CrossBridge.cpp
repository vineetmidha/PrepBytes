/*
Marathon Feb-21

Q.1 Cross that bridge: https://mycode.prepbytes.com/contest/MARATHONFEB21/problems/CROSSB
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
