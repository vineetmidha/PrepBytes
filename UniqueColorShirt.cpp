
// https://mycode.prepbytes.com/problems/arrays/UNQCL

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  map<int,int> colors;
  
  for (int i=0; i<n; i++)
  {
    int shirt;
    cin >> shirt;
    
    if (colors.find(shirt)==colors.end()){
      colors[shirt]=1;
    } else {
      colors[shirt]++;
    }
  }
  
  int count = 0;
  
  for (auto c : colors){
    if (c.second==1){
      count += 1;
    }
  }
  
  cout << count;
  
  return 0;
}
